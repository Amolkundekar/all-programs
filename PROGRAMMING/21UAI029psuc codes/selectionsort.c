#include <stdio.h>

void print(int *array, int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}



void selection_sort(int *a, int n)
{
    int temp, minIndex;
    for(int i = 0; i<n-1; i++)
    {
        minIndex = i;
        for(int j =i+1; j<n; j++)
        {
            if(a[j]< a[minIndex])
            {
                minIndex = j;
            }
        }
        temp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = temp;
    }
}


int main()
{
    int a[] = {456, 85, 3, 78, 2, 32, 48, 12, 48, 96};
    int n = sizeof(a)/sizeof(int);

    printf("before sorting\n");
    print(a, n);
    selection_sort(a, n);

    printf("after sorting\n");
    print(a, n);

    return 0;
}