#include<stdio.h>

int partition(int [], int , int );
void quicksort(int list[], int si, int ei)
{
    int j;
    if(si<ei)
    {
        j = partition(list, si, ei);
        quicksort(list, si, j);
        quicksort(list, j+1, ei);
    }
}

int partition(int list[], int si, int ei)
{
    int i, j, pivot, temp;
    i = si;
    j = ei;
    pivot = list[si];

    while(i< j)
    {
        while(list[i]<= pivot)
        {
            i++;
        }

        while(list[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            temp = list[i];
            list[i] = list[j];
            list[j]= temp;
        }
    }
    list[si] = list[j];
    list[j] = pivot;

    return j;

}
int main()
{
    int list[10];
    int size;

    printf("enter the size of the array\n");
    scanf("%d", &size);

    printf("enter the elements of the array\n");
    for(int i =0; i<size; i++)
    scanf("%d", &list[i]);

    quicksort(list, 0 , size-1);

    printf("\n\nAfter sorting\n");
    for(int i = 0; i< size; i++)
    printf("%d ", list[i]);


    return 0;
}