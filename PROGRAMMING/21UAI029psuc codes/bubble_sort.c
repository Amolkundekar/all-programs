#include <stdio.h>
#include<stdlib.h>
void display(int array[10])
{
    for(int i= 0; i<10; i++)
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
    int pass = (size - 1), count_for_make_adaptive = 0;
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
    int array[10] = {89, 2, 48, 36, 47, 2, 78, 256, 15, 3};

    printf("array before sorting\n");
    display(array);

    bubble_sort(array, 10);

    printf("array after sorting\n");
    display(array);

    return 0;
}