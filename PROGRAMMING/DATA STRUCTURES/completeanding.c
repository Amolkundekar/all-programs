#include<stdio.h>
#include<string.h>

void binary(int num, int array[])
{
    int i = 7, rem;
    while(num!=0)
    {
        rem = num % 2;
        num = num /2;
        array[i]= rem;
        i--;

    }

    if (num == 0)
    {
        while (i != -1)
        {
            array[i]=0;
            i--;
        }
        

    }

}
int main()
{
    char ip[16];
    char binaryip[36];
    char netid[36];
    char hostid[36];
    int allbinary[36];
    int i, n1, n2, n3, n4;
    int byte1[8], byte2[8], byte3[8], byte4[8];
    printf("enter IP address:\n");
    gets(ip);

    sscanf(ip, "%d.%d.%d.%d", &n1, &n2, &n3, &n4);

    if(n1>256 && n2>256 && n3> 256 && n4>256)
    {
        printf("enter valid ip address\n");

    }
    else
    {
        binary(n1, byte1);
        binary(n2, byte2);
        binary(n3, byte3);
        binary(n4, byte4);

        for(int i = 0; i<36;i++)
        {

            if(i<8)
            {
                allbinary[i] = byte1[i];
            }
            else if(i>8 && i<17)
            {
                allbinary[i] = byte2[i-9];
            }
            else if(i>17 && i<26)
            {
                allbinary[i] = byte3[i-18];
            }
            else if(i>26 && i<35)
            {
                allbinary[i] = byte2[i-27];
            }

        }
        

        printf(" binary representation of ip is:\n");
        for(i=0; i<35; i++)
        {

            printf("%d ", allbinary[i]);
        }

    }

}