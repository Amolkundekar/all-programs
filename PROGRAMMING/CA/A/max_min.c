#include<stdio.h>

void max_min(int arr[], int s)
{
    int n= s-1;
    int min = arr[0];
    int max=arr[0];
    for(int i=1;i<s; i++)
    {
        if(min>arr[i])
        {
            min= arr[i];
        }

        if(max<arr[i])
        {
            max= arr[i];
        }
    }
    printf("the maximum element is: %d\n", max);
    printf("the minimum element is: %d\n", min);
 
}
int main ()
{
    int size;
    printf("enter size of array\n");
    scanf("%d", &size);

    int arr[size];
    printf("enter array elements:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_min(arr, size);
    return 0;

}