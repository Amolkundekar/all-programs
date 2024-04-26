#include <stdio.h>

int main()
{
    FILE *fp;
    char data[20];

    fp = fopen("sammed.txt", "a+");

    if(fp == NULL)
    {
        printf("file not created\n");
    }
    else
    {
        printf("enter string you want to enter to file\n");
        gets(data);
        fputs(data, fp);
        fclose(fp);
    }



    return 0;
}