#include <iostream>
using namespace std;

bool binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    bool flag = false;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            flag = true;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return flag;
}

int main()
{
    int arr[] = {1, 4, 5, 12, 100, 1000};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, n, -100);
    return 0;
}