#include <stdio.h>

int main()
{
    FILE *f;

    char data[20] = "HOW ARE YOU ((()))";
    int num = 38;

    f = fopen("a.txt", "a");

    if(f == NULL)
    {
        printf("file not created\n");
    }
    else
    {
        
        fprintf(f, "%dtn%s\n", num, data);

        fclose(f);
    }

    return 0;
}