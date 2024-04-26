#include <stdio.h>

int main()
{
    int status;

    status = remove("delete_file.txt");
    if(status == 0)
    {
        printf("file deleted successfully\n");
    }
    else
    {
        printf("error while deleting file\n");
    }


    return 0;
}