#include <stdio.h>
#include <string.h>
void btoi(int binaryip[]);
void binary(int num, int array[8])
{
    int i = 7;
    while (num != 0)
    {
        int rem;

        rem = num % 2;
        num = num / 2;
        array[i] = rem;
        i--;
    }

    if (num == 0)
    {
        while (i != -1)
        {
            array[i] = 0;
            i--;
        }
    }
}

void btoi(int binaryip[])
{
    char dotip[36];

    dotip[8] = '.';
    dotip[16] = '.';

    dotip[24] = '.';

         for (int i = 0; i < 36; i++)
        {

            if (i < 8)
            {
                dotip[i]= (48 +binaryip[i]); 
            }
            else if (i >= 8 && i < 16)
            {
                dotip[i]=( 48 +binaryip[i]); 
            }
            else if (i >= 16 && i < 24)
            {
                dotip[i]= (48 + binaryip[i]); 
            }
            else if (i >= 24 && i < 32)
            {
                dotip[i]= (48 + binaryip[i]); 
            }
        }

    printf("dotted format:%s\n", dotip);
}

int main()
{
    char ip[16];
    int n1, n2, n3, n4;
    int byte1[8], byte2[8], byte3[8], byte4[8];
    int binaryip[32];

    printf("enter IP address:\n");
    gets(ip);
    sscanf(ip, "%d.%d.%d.%d", &n1, &n2, &n3, &n4);

    if (n1 <= 255 && n2 <= 255 && n3 <= 255 && n4 <= 255)
    {
        binary(n1, byte1);
        binary(n2, byte2);
        binary(n3, byte3);
        binary(n4, byte4);

        for (int i = 0; i < 36; i++)
        {
            binaryip[i] = byte1[i];

            if (i < 8)
            {
                binaryip[i] = byte1[i];
            }
            else if (i >= 8 && i < 16)
            {
                binaryip[i] = byte2[i - 8];
            }
            else if (i >= 16 && i < 24)
            {
                binaryip[i] = byte3[i - 16];
            }
            else if (i >= 24 && i < 32)
            {
                binaryip[i] = byte4[i - 24];
            }
        }

        btoi( binaryip);
        printf("binary ip \t");
        for (int j = 0; j < 32; j++)
        {
            printf("%d", binaryip[j]);
        }
        printf("\n");

        if(binaryip[0] == 0)
        {
        printf("class = A\n");
        }

        if(binaryip[0] == 1 && binaryip[1] == 0)
        {
        printf("class = B\n");
        }

        if(binaryip[0] == 1 && binaryip[1] == 1 && binaryip[2] == 0)
        {
        printf("class = C\n");
        }

        if(binaryip[0] == 1 && binaryip[1] == 1 && binaryip[2] == 1 && binaryip[3] == 0)
        {
        printf("class = D\n");
        }

        if(binaryip[0] == 1 && binaryip[1] == 1 && binaryip[2] == 1 && binaryip[3] == 1 && binaryip[4] == 1)
        {
        printf("class = E\n");
        }

    }
    else
    {
        printf("enter valid ip address!!!!");
    }

    return 0;

}