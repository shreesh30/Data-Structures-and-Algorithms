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
        next = NULL;
    }
};

class Queue
{
    Node *first;
    Node *last;

public:
    Queue()
    {
        first = NULL;
        last = NULL;
    }

    void enqueue(int element)
    {
        Node *n = new Node(element);
        if (first == NULL)
        {
            first = n;
            last = n;
            return;
        }
        // check if working fine or not
        last->next = n;
        last = n;
    }

    void dequeue()
    {
        if (first == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *toDelete = first;
        first = first->next;
        delete toDelete;
    }

    int peek()
    {
        if (first == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return first->data;
    }
    bool empty()
    {
        if (first == NULL)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;
    q.dequeue();
    q.peek();
    q.enqueue(12);
    q.enqueue(1);
    q.enqueue(125);
    q.enqueue(121);
    q.enqueue(122);
    cout << q.peek() << endl;
    cout << q.empty() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.empty() << endl;
    cout << q.peek() << endl;
    return 0;
}