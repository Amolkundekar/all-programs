// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char data[40];
//     int cnt;
//     printf("ENTER THE RECIEVED DATA\n");
//     scanf("%s", data);
//     int i;
//     char data2[40];

//     int len = strlen(data);
//     int j = 0;
//     for (i = 8; i < len - 8; i++)
//     {

//         if (data[i] == '1')
//         {

//             data2[j] = data[i];
//             cnt++;
//             j++;
//         }
//         else if (cnt == 5)
//         {

//             continue;
//         }
//         else if (data[i] == '0')
//         {
//             data2[j] = data[i];
//             cnt = 0;
//             j++;
//         }
//     }
//     printf("%s", data2);
// }
#include <stdio.h>

#include <string.h>
int main()
{
    char data[40];
    int cnt;
    printf("ENTER THE RECIEVED DATA ");
    scanf("%s", data);
    int i;
    char data2[40];

    int len = strlen(data);
    int j = 0;
    for (i = 8; i < len - 8; i++)
    {

        if (data[i] == '1')
        {

            data2[j] = data[i];
            cnt++;
            j++;
        }
        else if (cnt == 5)
        {

            continue;
        }
        else if (data[i] == '0')
        {
            data2[j] = data[i];
            cnt = 0;
            j++;
        }
    }

    for (int j = 0; j < (len - 16); j++)
    {
        printf("%c", data2[j]);
    }
}