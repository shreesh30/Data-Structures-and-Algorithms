#include <iostream>
using namespace std;
#define SIZE 128

class Stack
{
public:
    int *arr;
    int top;

    Stack()
    {
        arr = new int[SIZE];
        top = -1;
    }

    void push(int element)
    {
        if (top >= SIZE - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = element;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int peek()
    {
        if (top < 0)
        {
            cout << "No elements present in the stack" << endl;
            return -1;
        }
        return arr[top];
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return;
        }
        for (int i = top; i > 0; i--)
        {
            cout << arr[i] << "->";
        }
        cout << NULL << endl;
    }
};
int main()
{
    Stack st;
    st.pop();
    st.push(12);
    st.push(123);
    st.push(122);
    st.push(112);
    st.push(2);
    st.push(1);
    cout << st.peek() << endl;
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.display();

    return 0;
}