#include <iostream>
using namespace std;
#define SIZE 128

class Queue
{
    int *arr;
    int first;
    int last;

public:
    Queue()
    {
        arr = new int[SIZE];
        first = -1;
        last = -1;
    }

    void enqueue(int element)
    {
        if (last == SIZE - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        last++;
        arr[last] = element;
        if (first == -1)
        {
            first++;
        }
    }

    void dequeue()
    {
        if (first == -1 || first > last)
        {
            cout << "Queue Empty" << endl;
            return;
        }

        first++;
    }

    int peek()
    {
        if (first == -1 || first > last)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return arr[first];
    }

    bool empty()
    {
        if (first == -1 || first > last)
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