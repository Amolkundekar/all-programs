#include <stdio.h>
int binary_recursive(int arr[10], int low, int high, int element)
{
    int beg = low;
    int end = high;
    int mid;
    if (beg == end)
    {

        if(arr[beg] == element)
        {
            return beg;
        }
    }
    else
    {
        mid = (beg + end)/2;
        if(arr[mid]==element )
        {
            return mid;
        }
        else if(arr[mid]>element)
        {
            binary_recursive( arr, beg, (mid-1), element);
        }
        else
        {
            binary_recursive( arr, (mid+1), end, element);
        }
      

    }
    
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

    int search = binary_recursive(arr, 0, 9, element);

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