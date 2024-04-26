#include <stdio.h>

// this function is used to print the array

void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

// this function is used to sort the array
void selection_sort(int a[], int n)
{
    int temp, minIndex;
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
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
    int n;
    int a[10];
    printf("enter array size :\n");
    scanf("%d", &n);
    printf("enter array elements :\n");
    for (int i = 0; i < n; i++)
    
        scanf("%d", &a[i]);
    

    printf("before sorting\n");
    print(a, n);
    selection_sort(a, n);

    printf("after sorting\n");
    print(a, n);

    return 0;
}