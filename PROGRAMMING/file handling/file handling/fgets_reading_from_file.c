#include <stdio.h>

int main()
{
    FILE *p;
    char string[11];

    p = fopen("samme.txt", "r");
    if(p == NULL)
    {
        printf("file not opened\n");
    }
    else
    {
        while( !feof(p) )
        {
            fgets(string, 10, p);

            printf("**%s", string);

        }
        fclose(p);
    }


    return 0;
}