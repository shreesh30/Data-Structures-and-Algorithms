#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;
    int totalNode;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        totalNode = 0;
    }

    void append(int element)
    {
        Node *n = new Node(element);
        if (head == NULL)
        {
            head = n;
            tail = n;
            totalNode++;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = n;
        tail = temp;
        totalNode++;
    }

    void prepend(int element)
    {
        Node *n = new Node(element);
        if (head == NULL)
        {
            head = n;
            tail = n;
            totalNode++;
            return;
        }
        n->next = head;
        head = n;
        totalNode++;
    }

    void insert(int element, int position)
    {
        if (position < 0)
        {
            cout << "Invalid position" << endl;
            return;
        }
        else if (position == 0)
        {
            prepend(element);
        }
        else if (position >= totalNode)
        {
            append(element);
        }
        else
        {
            Node *n = new Node(element);
            Node *temp = head;
            for (int i = 0; i < position - 1; i++)
            {
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
            // n->next = temp->next->next;
            totalNode++;
        }
    }

    void remove(int position)
    {
        if (position < 1 || position > totalNode)
        {
            cout << "[WARNING]Oops! Node cannot be deleted." << endl;
            return;
        }
        Node *temp = head;
        if (position == 1)
        {
            head = head->next;
            delete temp;
            totalNode--;
            return;
        }

        for (int i = 0; temp != NULL && i < position - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL)
        {
            return;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        totalNode--;
        return;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Please Insert Element First." << endl;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    LinkedList ll;
    ll.append(16);
    ll.prepend(15);
    ll.prepend(14);
    ll.append(13);
    ll.append(12);
    ll.prepend(5);
    ll.prepend(4);
    ll.insert(20, 2);
    ll.insert(21, 4);
    ll.display();
    ll.remove(3);
    ll.display();
    return 0;
}