// C program for insertion sort
#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int size)
{
	int i, key, j;
	for (i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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
	int arr[20];
	int size;
	printf("enter size\n");
	scanf("%d", &size);
	printf("enter array elements\n");
   
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("after sorting\n");
	insertionSort(arr, size);
	printArray(arr, size);

	return 0;
}
