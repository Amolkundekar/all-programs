#include <stdio.h>
#include <stdlib.h>
int binary_recursive(int arr[10], int low, int high, int element)
{
    // int beg = low;
    // int end = high;
    int mid;
    if (low == high)
    {

        if (arr[low] == element)
        {
            return low;
        }
    }
    else
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            binary_recursive(arr, low, (mid - 1), element);
        }
        else
        {
            binary_recursive(arr, (mid + 1), high, element);
        }

        
    }
    
}
int main()
{
    int arr[20];
    int element, size, choice = 0, search;
    printf("enter size\n");
    scanf("%d", &size);
    printf("enter sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        printf("enter your choice\n 1] search\n 2] exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter element to search array:\n");
            scanf("%d", &element);

            search = binary_recursive(arr, 0, (size - 1), element);

            if ((search != -1)&&(search<size)&&(search>-1))
            {
                printf("the element %d is found at index %d\n", element, search);
            }
            else
            {
                printf("element is not found\n");
            }
            break;

        case 2:
            
            printf("exiting\n");
            goto end;
            break;
        default:
            printf("make proper choice\n");
            break;
        }
    }
    end:
    return 0;
}