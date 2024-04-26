/*
PRN: 21UAI029
FINDING CLASS AND NET ID 123.234.OF AN IP ADDRESS IN DECIMAL
*/

#include <stdio.h>

void tobinary(int n1, int n2, int n3, int n4)
{
    int array[4]={n1,n2,n3,n4};
    int bin = 0, i= 1;

    for(int p = 0; p<4; p++)
    {
        while(array[p]>0)
        {
            bin+=(array[p]%2)*i;
            array[p]= array[p]/2;
            i*=10; 

        }

        printf("%d.", bin);
        bin= 0;
        i=1;

    }

}

void main()
{
    int n1, n2, n3, n4;
    char ip[15];
    printf("enter ip address in decimal format:\n\n");
    scanf("%s", ip);
    sscanf(ip, "%d.%d.%d.%d.", &n1, &n2, &n3, &n4);
    printf("\n");

    if ((0 <= n1 && 255 >= n1) && (0 <= n2 && 255 >= n2) && (0 <= n3 && 255 >= n3) && (0 <= n4 && 255 >= n4))
    {
        if (0 <= n1 && n1 <= 127)
        {
            printf("class of ip address is 'A'...\n");
            printf("\n");
            printf("binary form is:");
             printf("\n");
            tobinary(n1, n2, n3, n4);
            printf("\n");
            printf("network id of given ip address is %d.0.0.0\n", n1);
            printf("in binary\n");
            tobinary(n1, 0, 0, 0);
            printf("\n");
            printf("host id of given ip address is:255.%d.%d.%d", n2, n3, n4);
        }

        else if (128 <= n1 && n1 <= 191)
        {
            printf("class of ip address is 'B'...\n");
            printf("\n");
            printf("binary form is:");
            printf("\n");
            tobinary(n1, n2, n3, n4);
            printf("\n");
            printf("network id of given ip address is %d.%d.0.0\n", n1, n2);
            printf("\n");
        }

        else if (192 <= n1 && n1 <= 223)
        {
            printf("class of ip address is 'C'...\n");
            printf("\n");
            printf("binary form is:");
            printf("\n");
            tobinary(n1, n2, n3, n4);
            printf("\n");
            printf("network id of given ip address is %d.%d.%d.0\n", n1, n2, n3);
            printf("\n");
        }

        else if (224 <= n1 && n1 <= 239)
        {
            printf("class of ip address is 'D'...\n");
            printf("\n");
            printf("binary form is:");
            printf("\n");
            tobinary(n1, n2, n3, n4);
            printf("\n");
            printf("network id of given ip address is unavilable\n");
            printf("\n");
        }

        else if (240 <= n1 && n1 <= 255)
        {
            printf("class of ip address is 'E'...\n");
            printf("\n");
            printf("binary form is:");
            printf("\n");
            tobinary(n1, n2, n3, n4);
            printf("\n");
            printf("network id of given ip address is unavilable\n");
            printf("\n");
        }
    }
    else
    {

        printf("invalid ip address!!!!");
        printf("\n");
    }
}