#include <stdio.h>

int main()
{
    FILE *f;
    int ch;

    f = fopen("sa.txt", "r");

    if(f == NULL)
    {
        printf("file not created\n");
    }
    else
    {
        while(!feof(f)) // returns 1 when goes to end of file.
        {
            ch = fgetc(f);
            printf("%c", ch);
        }
        fclose(f);

    }

    return 0;
}