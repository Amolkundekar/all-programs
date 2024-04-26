#include <stdio.h>
#include <string.h>

int main()
{
    char data[15];
    char parity[16];

    printf("enter data\n");
    gets(data);
    int length;
    int counter = 0, even, i = 0;
    strcpy(parity, data);
    length = strlen(parity);
    for(int i; i<length; i++)
    {
        if(data[i] == '1')
        {
            counter++;
        }
        
    }

    even = counter % 2;
    printf("%d", even);
    if(even == 0)
    {
        parity[length+1] = '0';
        
    }
    else
    {
        parity[length+1] = '1';
    }

    printf("after parity cheaking\n%s\n", parity);

    return 0;
}