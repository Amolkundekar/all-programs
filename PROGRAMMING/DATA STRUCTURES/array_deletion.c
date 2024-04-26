#include <stdio.h>

int displayarr(int arr[100], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void element_deletion(int arr[100], int size, int index)
{
    printf("deleted element is %d\n", arr[index]);
    

    for (int i =index; i < size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
 
    
}
int main()
{
    int arr[100] = {1, 3, 34, 7, 5};
    int size = 5,  index = 3;
    displayarr(arr, size);
    element_deletion(arr, size, index);
    size = size - 1;
    displayarr(arr, size);
}


