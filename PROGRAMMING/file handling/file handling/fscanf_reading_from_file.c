#include <stdio.h>

int main()
{
    FILE *f;
    char st[10];
    int num;

    f = fopen("samm.txt", "r");

    if(f == NULL)
    {
        printf("file not opened\n");
    }
    else
    {
        fscanf(f, "%d%s", &num, st); // while reading we need to specify same format as in the file

        printf("%d.%s", num, st); // while writing any format is allowed
        
        fclose(f);
    }


    return 0;
}