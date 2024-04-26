#include <stdio.h>
int binary_search(int arr[10], int size, int element)
{
    int low = 0;
    int high = (size - 1);
    int mid;
    while (low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid]< element )
        {
            low = (mid + 1);
        }
        else
        {
            high = mid - 1;
        }

    }
    return -1;
}
int main()
{
    int arr[10];
    int element;
    printf("enter sorted array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter element to search array:\n");
    scanf("%d", &element);

    int search = binary_search(arr, 10, element);

    if(search != -1)
    {
        printf("the element %d is found at index %d\n",  element , search);
    }
    else
    {
        printf("element is not found\n");
    }
    return 0;
}