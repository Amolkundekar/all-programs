#include <stdio.h>
#include<conio.h>
int main()
{
    int n1, n2;
    int gcd;
    printf("enter two numbers:\n");
    scanf("%d\n%d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; ++i)
    {
        if ((n1 % i == 0 )&& (n2 % i == 0))
        {
            gcd = i;
        }
    }
    printf("the gcd is %d", gcd);

    return 0;
}