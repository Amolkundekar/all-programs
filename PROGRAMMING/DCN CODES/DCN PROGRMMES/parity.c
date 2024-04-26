#include <stdio.h>
#include <string.h>
int main()
{
    char data[20];
    char parity[21];
    printf("enter data\n");
    gets(data);
    int length = strlen(data);
    printf("data length %d\n", length);
    int counter = 0;
    int even;
    int i = 0;
    while (data[i] != '\0')
    {
        if (data[i] == '1')
        {
            counter++;
        }
        i++;
    }

    even = counter % 2;

    if (even == 1)
    {
        strcpy(parity, data);
        parity[length] = '1';
        parity[length + 1] = '\0';
    }
    else
    {
        strcpy(parity, data);
        parity[length] = '0';
        parity[length + 1] = '\0';
    }

    length = strlen(parity);
    printf("parity length is %d\n", length);

    printf("after parity cheaking\n%s\n", parity);
    return 0;
}