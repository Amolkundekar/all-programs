/* implementation of 0-1 Knapsack problem */
#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{

    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    else
        return max( val[n - 1] + knapSack(W - wt[n - 1],wt, val, n - 1), knapSack(W, wt, val, n - 1));
}

int main()
{
    
    int n , w;

    printf("enter the total no of weights\n");
    scanf("%d", &n);
    int val[n], wt[n];
    printf("enter the weights with respective profit\n");

    for(int i = 0; i< n; i++)
    {
        scanf("%d%d", &wt[i], &val[i]);
    }

    printf("enter the total capacity\n");
    scanf("%d", &w);
   
    
    printf(" Maximum profit is %d", knapSack(w, wt, val, n));
    return 0;
}
