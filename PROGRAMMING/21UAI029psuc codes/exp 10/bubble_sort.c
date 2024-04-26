#include <stdio.h>
#include<stdlib.h>
void display(int array[10], int size)
{
    for(int i= 0; i<size; i++)
    {
        printf("%d\n", array[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int array[10], int size)
{
    int pass = (size - 1);
    while(pass != 0)
    {
        for(int i = 0; i<size; i++)
        {
            if(array[i] > array[i + 1])
            {
                swap(&array[i], &array[i+1]);
            }
        }
        
        pass--;
        
    }
    
}

int main()
{
    int array[10];
    int size;
    
    printf("enter array size\n");
    scanf("%d", &size);
    printf("enter array elementd\n");

   for(int i=0; i<size; i++)
   {
    scanf("%d", &array[i]);
   }

    bubble_sort(array, size);

    printf("array after sorting\n");
    display(array, size);

    return 0;
}