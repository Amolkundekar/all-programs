#include <stdio.h>

int main()
{
    int status = rename("old.txt", "new_renamed.txt");
    if(status == 0)
    {
        printf("file renamed successfully\n");
    }
    else
    {
        printf("file not reanamed\n");
    }


    return 0;
}