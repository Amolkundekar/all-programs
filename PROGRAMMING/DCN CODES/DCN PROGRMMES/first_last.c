#include <stdio.h>
#include <string.h>
#include<math.h>

void binary(int num, int array[8])
{
    int i = 7, rem;
    while (num != 0)
    {
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

//this function is used to create default mask
void defaultmask(int dm, char dfs[33])
{
    for (int i = 0; i < 32; i++)
    {
        if (i < dm)
        {
            dfs[i] = '1';
        }
        else
        {
            dfs[i] = '0';
        }
    }
}
void first(int binaryip[32], char dfs[33], char firstid[33])
{
    for (int j = 0; j < 32; j++)
    {
        firstid[j] = 48 + ((dfs[j] - 48) & (binaryip[j]));
    }
}
void last(int binaryip[32], char dfs[33], char lastid[33])
{
    for (int j = 0; j < 32; j++)
    {
        lastid[j] = 48 + (!(dfs[j] - 48) | (binaryip[j]));
    }
}
int main()
{

    char ip[16]; 
    char dfs[33];
    int binaryip[32];
    char firstid[33];
    char lastid[33];
    int n1, n2, n3, n4, dm;
    int byte1[8], byte2[8], byte3[8], byte4[8];
    int total =1 ;
    int base=2;

        printf("enter IP address:\n");
    gets(ip);

    sscanf(ip, "%d.%d.%d.%d/%d", &n1, &n2, &n3, &n4, &dm);
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
    // printf("%d  %d  %d  %d  %d  \n ", n1, n2, n3, n4, dm);
    printf("binary ip \t");
    for (int j = 0; j < 32; j++)
    {
        printf("%d", binaryip[j]);
    }
    printf("\n");

    defaultmask(dm, dfs);
    printf("default mask:\t");
    for (int j = 0; j < 32; j++)
    {
        printf("%c", dfs[j]);
    }
    printf("\n");

    first(binaryip, dfs, firstid);
    printf("first id: \t");
    for (int j = 0; j < 32; j++)
    {
        printf("%c", firstid[j]);
    }
    printf("\n");

    last(binaryip, dfs, lastid);
    printf("last id: \t");
    for (int j = 0; j < 32; j++)
    {
        printf("%c", lastid[j]);
    }
    printf("\n");

    int power;
    power= 32-dm;
    /*while (power > 0)
    {
        total = total * base;
        power--;
    }
    printf("total no of addresses : %ld", total);*/
    total=pow(base, power);
     printf("total no of addresses :%d", total);
    printf("\n");

    return 0;
}