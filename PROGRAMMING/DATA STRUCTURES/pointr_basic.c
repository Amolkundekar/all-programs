#include<stdio.h>
int main()
{
    int *ptr, *dp;
    int a=5;
    ptr= &a;
    dp= &ptr;
    printf("value of a :%d\n", a);
    printf("address of a :%d\n", ptr);
    printf("address of a :%d\n", &a);
    printf("value of ptr :%d\n", ptr);
    printf("address of ptr:%d\n", dp);

}
