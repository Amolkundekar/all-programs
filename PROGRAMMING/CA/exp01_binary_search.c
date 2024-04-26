#include <stdio.h>

int binary(int arr[], int i, int l, int element)
{
        if (i == l)
        {
                if (element = arr[i])
                {
                        return i;
                }
                else
                {
                        return -1;
                }
        }
        else
        {
                int mid;
                mid = (i + l) / 2;
                if (arr[mid] == element)
                {
                        return mid;
                }

                else if (element < arr[mid])
                {
                        return binary(arr, i, mid - 1, element);
                }

                else
                {
                        return binary(arr, mid + 1, l, element);
                }
        }
}

int main()
{
        int i = 0, size;
        int element;
        printf("enter the size of the array\n");
        scanf("%d", &size);
        int arr[size];

        printf("Enter array elements: ");
        for (int j = 0; j <size; j++)
        {
                scanf("%d", &arr[j]);
        }
        printf("\nGive the element to search: ");
        scanf("%d", &element);

        printf("\nThe element is present at index %d ", binary(arr, i, size-1, element));
        return 0;
}
