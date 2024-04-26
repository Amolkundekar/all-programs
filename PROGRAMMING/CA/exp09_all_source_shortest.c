#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int min(int a, int b)
{
    if (a >= b)
        return b;
    else
        return a;
}

int shortest(int n, int b[5][5])
{
    int k = 0, i, j;
    /*for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    b[i][j]=a[i][j];
    }
    }*/
    for (; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                b[i][j] = min(b[i][j], b[i][k] + b[k][j]);
            }
        }
    }
    return 0;
}

int main()
{
    int b[5][5], n, i, j, k;
    printf("\nenter number of states: ");
    scanf("%d", &n);
    printf("\nenter values: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    shortest(n, b);
    /*for(k=0;k<n;k++)
    {
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    b[i][j]=min(b[i][j],b[i][k]+b[k][j]);
    }
    }
    }*/
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
    printf("\n_________________________________________________________\n");
    return 0;
}
