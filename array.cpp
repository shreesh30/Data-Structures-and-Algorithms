// #include <iostream>

// using namespace std;

// class DynamciArray
// {
//     int *arr;
//     int capacity;
//     int size;

// public:
//     DynamciArray()
//     {
//         arr = new int[2];
//         capacity = 2;
//         size = 0;
//     }

//     int get(int index)
//     {
//         if (index > -1 && index < capacity)
//         {
//             return arr[index];
//         }
//         return -1;
//     }

//     void display()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     void push(int x)
//     {
//         if (size == capacity)
//         {
//             int *temp = new int[2 * capacity];
//             for (int i = 0; i < capacity; i++)
//             {
//                 temp[i] = arr[i];
//             }
//             delete[] arr;
//             capacity *= 2;
//             arr = temp;
//         }
//         arr[size] = x;
//         size++;
//     }

//     void push(int index, int x)
//     {
//         if (index == capacity)
//         {
//             push(x);
//         }
//         for (int i = size; i > index; i--)
//         {
//             arr[i] = arr[i - 1];
//         }
//         arr[index] = x;
//         size++;
//     }

//     int pop()
//     {
//         if (size == 0)
//         {
//             cout << "No elements to pop";
//             return -1;
//         }
//         int ele = arr[size - 1];
//         size--;
//         return ele;
//     }

//     void popElement(int index)
//     {
//         if (size == 0)
//         {
//             cout << "No elements to pop";
//             return;
//         }
//         if (index > -1 && index < size)
//         {
//             size--;
//             for (int i = index; i < size; i++)
//             {
//                 arr[i] = arr[i + 1];
//             }
//         }
//     }
// };

// int main()
// {
//     DynamciArray a;
//     a.push(0);
//     a.push(2);
//     a.push(3);
//     a.push(4);
//     a.push(5);
//     a.push(6);
//     a.push(7);
//     a.push(1);
//     a.push(21);
//     a.display();
//     // cout << a.get(2) << endl;
//     a.pop();
//     a.pop();
//     a.pop();
//     a.pop();
//     a.popElement(3);
//     a.display();
//     a.push(0, 23);
//     a.push(2, 43);
//     a.display();
// }

// EXERCIESE

//REVERSING THE STRING
// #include <iostream>
// using namespace std;

// function to swap characters to reverse the string
// string revSwap(string s)
// {
//     int len = s.length();
//     int n = len - 1;
//     char temp;
//     for (int i = 0; i <= len / 2; i++)
//     {
//         temp = s[i];
//         s[i] = s[n];
//         s[n] = temp;
//         n--;
//     }
//     return s;
// }

// function to reverse the string using reverse function already provided to us
// string revReverse(string s)
// {
//     reverse(s.begin(), s.end());
//     return s;
// }

// function to reverse the string using swap function already provided to us
// string revSwapFunc(string s)
// {
//     int n = s.length() - 1;
//     for (int i = 0; i < s.length() / 2; i++)
//     {
//         swap(s[i], s[n]);
//         n--;
//     }
//     return s;
// }
// int main()
// {
//     cout << revSwap("My name is shreesh") << endl;
//     cout << revReverse("My name is shreesh") << endl;
//     cout << revSwapFunc("My name is shreesh") << endl;
//     return 0;
// }

// MERGE TWO ARRAYS
#include <iostream>
using namespace std;

void mergeArray(int a1[], int a2[], int a1size, int a2size)
{

    int *res = new int[a1size + a2size];
    int resSize = 0;
    for (int i = 0; i < a1size; i++)
    {
        res[i] = a1[i];
        resSize++;
    }

    for (int j = 0; j < a2size; j++)
    {
        res[resSize] = a2[j];
        resSize++;
    }

    sort(res, res + a1size + a2size);

    for (int k = 0; k < a1size + a2size; k++)
    {
        cout << res[k] << " ";
    }
}
int main()
{

    int a1[] = {1, 2, 3, 4};
    int a2[] = {3, 3, 4, 9};
    mergeArray(a1, a2, 4, 4);
    return 0;
}