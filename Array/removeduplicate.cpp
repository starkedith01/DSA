#include <stdio.h>
using namespace std;
int res=1;
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void bubbleSort(int arr[], int n)
{
int i, j;
bool swapped;
for (i = 0; i < n-1; i++)
{
	swapped = false;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		swap(&arr[j], &arr[j+1]);
		swapped = true;
		}
	}


	if (swapped == false)
		break;
}
}

void removedupli(int arr[],int n)
{
 
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
}
void printArray(int arr[])
{
	int i;
	for (i=0; i < res; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {22, 22, 22, 22, 22, 22, 22};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	removedupli( arr, n);
	printf("Sorted array: \n");
	printArray(arr);
	return 0;
}
