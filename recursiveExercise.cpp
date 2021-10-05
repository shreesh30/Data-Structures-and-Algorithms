// Factorial
//5!=5*4*3*2*1

// #include <iostream>
// using namespace std;

// int findFactorialIterative(int num)
// {
//     int ans = 1;
//     while (num >= 1)
//     {
//         ans *= num;
//         num--;
//     }
//     return ans;
// }

// int findFactorialRecursive(int num)
// {

//     if (num == 1)
//     {
//         return num;
//     }

//     return (num * findFactorialRecursive(num - 1));
// }
// int main()
// {
//     cout << findFactorialIterative(10) << endl;
//     cout << findFactorialRecursive(3) << endl;
//     return 0;
// }

//Fibonacci series
// 0,1,1,2,3,5,8,13,....
#include <iostream>
using namespace std;

void fibonacciIterative(int num)
{
    int l1 = 0;
    int l2 = 1;
    int ans = 0;
    for (int i = 0; i <= num; i++)
    {
        cout << l1 << " ";
        ans = l1 + l2;
        l1 = l2;
        l2 = ans;
    }
    cout << endl;
}
int fibonacciRecursive(int num)
{

    if (num <= 1)
    {
        return num;
    }
    return fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2);
}

int main()
{
    fibonacciIterative(10);
    int i = 0;
    while (i <= 10)
    {
        cout << fibonacciRecursive(i) << " ";
        i++;
    }

    return 0;
}