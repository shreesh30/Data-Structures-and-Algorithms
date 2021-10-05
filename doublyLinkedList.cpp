#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList
{
    Node *head;
    Node *tail;
    int totalNode;

public:
    DoublyLinkedList()
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
        n->prev = temp;
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
            n->prev = temp;
            temp->next = n;
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
        else
        {
            Node *temp = head;
            if (position == 1)
            {
                head = head->next;
                head->prev = NULL;
                delete temp;
                totalNode--;
                return;
            }

            for (int i = 1; i < position; i++)
            {
                temp = temp->next;
            }

            Node *toDelete = temp;
            if (temp->next != NULL)
            {

                temp->next->prev = temp->prev;
                temp->prev->next = temp->next;
                delete toDelete;
                totalNode--;
            }
            else
            {
                temp->prev->next = NULL;
                tail = temp->prev;
                delete toDelete;
                totalNode--;
            }
        }
    }

    void reverse()
    {
        Node *prevptr = NULL;
        Node *curptr = head;

        while (curptr != NULL)
        {
            prevptr = curptr->prev;
            curptr->prev = curptr->next;
            curptr->next = prevptr;
            curptr = curptr->prev;
        }

        if (prevptr != NULL)
        {
            head = prevptr->prev;
        }
    }

    void display()
    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.append(16);
    dl.prepend(15);
    dl.prepend(14);
    dl.append(13);
    dl.append(12);
    dl.prepend(5);
    dl.prepend(4);
    dl.insert(20, 2);
    dl.insert(21, 4);
    dl.display();
    dl.remove(3);
    dl.display();
    dl.reverse();
    dl.display();
    return 0;
}