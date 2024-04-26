#include <stdio.h>
int displayarr(int arr[100], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int element_insertion(int arr[100], int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {1, 3, 34, 7, 5};
    int size = 5, element = 45, index = 3, capacity = 100;
    displayarr(arr, size);
    element_insertion(arr, size, capacity, element, index);
    size = size + 1;
    displayarr(arr, size);
}