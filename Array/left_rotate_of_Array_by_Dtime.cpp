#include <stdio.h>
using namespace std;

void leftrotate(int arr[], int n, int d)
{
    while (d)
    {
        int temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
        d--;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    leftrotate(arr, n, d);
    printArray(arr, n);

    return 0;
}
