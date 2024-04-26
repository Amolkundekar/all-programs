#include <stdio.h>
#include <string.h>

int main()
{
    char data[40];
    char codeword[60];
    char flag[9] = "01111110";

    printf("enter data\n");
    scanf("%s", data);

    strcpy(codeword, flag);
    int i = 0, j = 8;
    while (data[i] != '\0')
    {
        if ((data[i] == '1') && (data[i + 1] == '1') && (data[i + 2] == '1') && (data[i + 3] == '1') && (data[i + 4] == '1'))
        {
            codeword[j] = data[i];
            codeword[j+1] = data[i+1];
            codeword[j+2] = data[i+2];
            codeword[j+3] = data[i+3];
            codeword[j+4] = data[i+4];
            codeword[j+5] = '0';
            i = (i + 5);
            j = (j + 6);
        }
        else
        {
            codeword[j] = data[i];
            j++;
            i++;
        }
    }

    strcat(codeword, flag);

    printf("%s\n", codeword);

    return 0;
}
