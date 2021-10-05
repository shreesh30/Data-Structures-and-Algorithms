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

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int element)
    {
        Node *n = new Node(element);
        if (top == NULL)
        {
            top = n;
            return;
        }
        n->next = top;
        top = n;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Under-flow" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "No element present in the stack" << endl;
            return -1;
        }
        return top->data;
    }

    void display()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }

        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    Stack st;
    st.display();
    st.pop();
    cout << st.peek() << endl;
    st.push(60);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.display();
    st.pop();
    st.pop();

    st.display();
    cout << st.peek();
    return 0;
}