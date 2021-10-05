#include <iostream>
#include <stack>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int element)
    {
        s1.push(element);
    }

    void dequeue()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        s2.pop();
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            return true;
        }
        return false;
    }

    int peek()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int top = s2.top();
        return top;
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