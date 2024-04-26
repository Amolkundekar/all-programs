#include <stdio.h>

int binary_search(int a[], int si, int ei, int key)
{
    int mid =( si+ei)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    else if(a[mid]>key)
    {
        return binary_search(a,si,mid,key);
    }
    else{
        return binary_search(a,mid+1, ei, key);
    }
}
int main()
{

    int a[10] = {2, 4, 6, 8, 34, 36, 56, 59, 62, 85};

    int si=0, ei=9;
    int key;
    int index;
    printf("enter key to  search in the array\n");
    scanf("%d", &key);

    index = binary_search(a, si, ei, key);
    printf("\nthe element %d is present at %d index\n", key, index);

    return 0;
}