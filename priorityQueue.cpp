#include <iostream>
using namespace std;

class Node
{
public:
    int priority;
    int data;
    Node *next;

    Node(int data, int priority)
    {
        this->data = data;
        this->priority = priority;
        this->next = NULL;
    }
};

class PriorityQueue
{
    Node *first;

public:
    PriorityQueue()
    {
        first = NULL;
    }

    void enqueue(int data, int priority)
    {
        Node *newNode = new Node(data, priority);
        if (first == NULL || priority < first->priority)
        {
            newNode->next = first;
            first = newNode;
            return;
        }
        Node *temp = first;
        while (temp->next != NULL && temp->next->priority <= priority)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void dequeue()
    {
        // delete element first which has the highest priority
        if (first == NULL)
        {
            cout << "Queue Empty Please insert Elements" << endl;
            return;
        }
        Node *temp = first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
    }

    void display()
    {
        if (first == NULL)
        {
            cout << "Queue Empty" << endl;
            return;
        }
        Node *temp = first;
        while (temp != NULL)
        {
            cout << temp->priority << " " << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    PriorityQueue p;
    p.enqueue(10, 3);
    p.enqueue(20, 2);
    p.enqueue(40, 1);
    p.enqueue(50, 4);

    p.dequeue();
    p.display();
    return 0;
}