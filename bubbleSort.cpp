#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {20, 0, 10, 100, -1, -10};
    bubbleSort(arr, 6);
    return 0;
}