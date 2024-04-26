#include<stdio.h>

void merge(int [], int , int , int );

void mergesort(int list[], int si, int ei)
{
    if(si<ei)
    {
        int mid = (si + ei)/2;
        mergesort(list , si, mid);
        mergesort(list, mid+1, ei);
        merge(list, si, ei, mid);
    }
}

void merge(int list[], int si, int ei, int mid)
{

    int temp[10], i, j ,k;
    i = si;
    j = mid+1;
    k = si;
    
    while (i<= mid && j<= ei)
    {
        if(list[i]< list[j])
        {
            temp[k]= list[i];
            i++;
            k++;
        }
        else
        {
            temp[k]= list[j];
            j++;
            k++;
        }
    }

    while(i<= mid)
    {
        temp[k] = list[i];
        i++;
        k++;
    }

    while(j<= ei)
    {
        temp[k] = list[j];
        j++;
        k++;

    }

    for(int l = si; l<=ei; l++)
    {
        list[l] = temp[l];
    }
    
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

    mergesort(list, 0 , size-1);

    printf("\n\nAfter sorting\n");
    for(int i = 0; i< size; i++)
    printf("%d ", list[i]);

}