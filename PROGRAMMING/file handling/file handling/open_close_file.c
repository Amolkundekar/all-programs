#include <stdio.h>

int main()
{
    FILE *f;

    f = fopen("sam.txt", "a");
    
    if(f == NULL)
    {
        printf("file not created\n");
    }
    else
    {
        printf("file created\n");
    }

    fclose(f);

    return 0;
}