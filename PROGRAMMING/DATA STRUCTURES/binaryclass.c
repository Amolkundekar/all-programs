#include<stdio.h>
#include<string.h>
int main()
{
    
    
    char ip[36];
    printf("enter ip address in 8bit binary(0'S and 1's) format:\n\n");
    scanf("%s", ip);
    

    if (ip[0] == '0')
    {
        printf("class is A\n");
    }
    else if (ip[1] == '1' && ip[2] == '0')
    {
        printf("class is B\n");
    }
    else if (ip[0] == '1' && ip[1] == '1' && ip[2] == '0')
    {
        printf("class is C\n");
    }
    else if (ip[0] == '1' && ip[1] == '1' && ip[2] == '1' && ip[3] == '0')
    {
        printf("class is D\n");
    }
    else if (ip[0] == '1' && ip[1] == '1' && ip[2] == '1' && ip[3] == '1')
    {
        printf("class is E\n");
    }
    else
    {
        printf("enter valid IP address\n");
    }

    

}