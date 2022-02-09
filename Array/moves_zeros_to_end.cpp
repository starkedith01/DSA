#include <stdio.h>
using namespace std;
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void move(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(&arr[i],&arr[count]);
        count++;
        }
    }
}
void printArray(int arr[],int n)
{
	int i;
	for (i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
    int arr[]={1,0,3,0,0,1,8,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    move(arr,n);
     printArray(arr, n);
    return 0;
}