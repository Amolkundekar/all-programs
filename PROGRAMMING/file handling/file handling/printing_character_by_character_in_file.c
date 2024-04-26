#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    f = fopen("sam.txt", "a"); // if i open in r it will only read existing content
    // if i open in w it will delete previous data and writes new to file
    // if i open in a it will not delete previous data, it ammends the new data at the end of previous data


    int i;
    char data[20] = "lot to learn";
    int length = strlen(data);

    if(f == NULL)
    {
        printf("file not created\n");
    }
    else
    {
        printf("file created successfully\n");

    for(i = 0; i < length; i++)
    {
        fputc(data[i], f);
    }
    fclose(f);

    }

    return 0;
}