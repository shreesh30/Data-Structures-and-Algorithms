#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int data;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinarySearchTree
{
    Node *root;

public:
    BinarySearchTree()
    {
        this->root = NULL;
    }

    void insert(int data)
    {
        Node *newNode = new Node(data);
        Node *temp = root;

        Node *trailing = NULL; //this pointer will help us in maintaining the trailing pointer of temp
        while (temp != NULL)
        {
            trailing = temp;
            if (data > temp->data)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }

        if (trailing == NULL)
        {
            root = newNode;
        }
        else if (data < trailing->data)
        {
            trailing->left = newNode;
        }
        else
        {
            trailing->right = newNode;
        }
    }

    void remove(int data)
    {
        if (root == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }
        Node *temp = root;
        Node *parent = NULL;

        while (temp != NULL)
        {
            if (data > temp->data)
            {
                parent = temp;
                temp = temp->right;
            }
            else if (data < temp->data)
            {
                parent = temp;
                temp = temp->left;
            }
            else
            {
                // looking for the child nodes
                if (temp->left == NULL && temp->right == NULL)
                {
                    cout << "We are deleting a leaf node" << endl;
                    if (parent->left == temp)
                    {
                        parent->left = NULL;
                    }
                    else
                    {
                        parent->right = NULL;
                    }
                    delete temp;
                    return;
                }
                else if (temp->left == NULL || temp->right == NULL)
                {
                    cout << "We are deleting parent node which have one child" << endl;
                    if (temp->left != NULL && data < root->data)
                    {
                        parent->left = temp->left;
                    }
                    else if (temp->right != NULL && data > root->data)
                    {
                        parent->right = temp->right;
                    }
                    else if (temp->right != NULL && data < root->data)
                    {
                        parent->left = temp->right;
                    }
                    else
                    {
                        //checking if temp has no value in the right and data is greater than parent
                        //then the parent right value is temp's left value
                        parent->right = temp->left;
                    }
                    delete temp;
                    return;
                }
                else
                {
                    cout << "Deleting Node that has two childrens" << endl;
                    //in this case we need to find the pre order successor
                    Node *t = temp->right;
                    if (t->left == NULL && t->right == NULL)
                    {
                        temp->data = t->data;
                        t->right = NULL;
                        delete t;
                        return;
                    }
                    else if (t->left == NULL && t->right != NULL)
                    {
                        temp->data = t->data;
                        temp->right = t->right;
                        delete t;
                        return;
                    }
                    while (t->left != NULL)
                    {
                        parent = t;
                        t = t->left;
                    }
                    temp->data = t->data;
                    parent->left = NULL;
                    delete t;
                    return;
                }
            }
        }
        cout << "No nodes found to delete" << endl;
        return;
    }

    bool lookup(int data)
    {
        if (root == NULL)
        {
            cout << "The tree is empty" << endl;
            return false;
        }
        Node *temp = root;
        while (temp != NULL)
        {
            if (temp->data > data)
            {
                temp = temp->left;
            }
            else if (temp->data < data)
            {
                temp = temp->right;
            }
            else if (temp->data == data)
            {
                return true;
            }
        }
        return false;
    }

    void display()
    {
        // this display function uses in-order traversal left->root->right
        //here we are using stack data structure for traversing
        stack<Node *> s;
        Node *temp = root;

        while (temp != NULL || s.empty() == false)
        {
            while (temp != NULL)
            {
                s.push(temp);
                temp = temp->left; // going towards left first
            }
            temp = s.top();
            cout << temp->data << "  "; // printing the left most data.
            s.pop();

            temp = temp->right; // going towards right.
        }
    }
};

int main()
{
    /*    20
         /  \
        10   30
       /    /  \
      1    25  40   tree structure */
    BinarySearchTree bst;
    bst.insert(10);
    bst.insert(20);
    bst.insert(30);
    bst.insert(25);
    bst.insert(40);
    bst.insert(1);

    cout << bst.lookup(20) << endl;
    bst.display();
    bst.remove(0);
    bst.remove(20);
    bst.display();
    return 0;
}