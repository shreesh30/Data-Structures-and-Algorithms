#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    int arr[] = {5, 2, 1, 10, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << linearSearch(arr, n, -1);
    return 0;
}