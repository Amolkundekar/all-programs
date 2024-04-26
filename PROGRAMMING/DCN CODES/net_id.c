#include <stdio.h>
#include <string.h>

void decimal_to_binary(int num, int array[8])
{
    int i = 7;
    while(num != 0)
    {
        int rem;

        rem = num % 2;
        num = num/2;
        array[i] = rem;
        i--;
    }


    if(num == 0)
    {
        while(i != -1)
        {
            array[i] = 0;
            i--;
        }
    }
    
}

int main()
{
    char ip[15];
    char bip[36];
    char hostid[36];
    char netid[36];
    int n1, n2, n3, n4;
    int byte1[8], byte2[8], byte3[8], byte4[8];

    printf("enter ip address\n");
    gets(ip);
    sscanf(ip, "%d.%d.%d.%d", &n1, &n2, &n3, &n4);
    //printf("%d%d%d%d", o1, o2, o3, o4);

    decimal_to_binary(n1, byte1);
    decimal_to_binary(n2, byte2);
    decimal_to_binary(n3, byte3);
    decimal_to_binary(n4, byte4);

    int all_binary[36];
   /* all_binary[8] = 8;
    all_binary[16] = 8;
    all_binary[25] = 8; */


if((n1 > 255) || (n2 > 255) || (n3> 255) || (n4> 255))
{
    printf("Invalid IP address\n");
}

else
{

    for(int j = 0; j<36; j++)
    {
        if(j < 8)
        {
            all_binary[j] = byte1[j];
        }
        else if((j > 8) && (j < 17))
        {
            all_binary[j] = byte2[j - 9];
        }
        else if((j > 17) && (j < 26))
        {
            all_binary[j] = byte3[j - 18];
        }
        else
        {
            all_binary[j] = byte4[j - 27];
        }
        
    }


    if(all_binary[0] == 0)
    {
        printf("class = A\n");
        char subnet[36] = "11111111.00000000.00000000.00000000";
       printf("subnet mask = %s\n", subnet);
        for(int j= 0; j<36; j++)
        {
            if(subnet[j] == '.')
            {
                netid[j] = '.';
            }
            else
            {
                netid[j] = 48 + ((subnet[j] - 48) & (all_binary[j]));
            }
            
        }
        
        printf("Network Id = %s\n", netid);

        for(int i = 0; i<36; i++)
        {
            if(subnet[i] == '.')
            {
                hostid[i] = '.';
            }
            else
            {
                hostid[i] = 48 + ((all_binary[i]) | (subnet[i] - 48));
            }
        }

        printf("Host Id = %s\n", hostid);
    }


    if((all_binary[0] == 1) && (all_binary[1] == 0))
    {
        printf("class = B\n");
        char subnet[36] = "11111111.11111111.00000000.00000000";
       printf("subnet mask = %s\n", subnet);
        for(int j= 0; j<36; j++)
        {
            if(subnet[j] == '.')
            {
                netid[j] = '.';
            }
            else
            {
                netid[j] = 48 + ((subnet[j] - 48) & (all_binary[j]));
            }
            
        }
        
        printf("Network Id = %s\n", netid);

        for(int i = 0; i<36; i++)
        {
            if(subnet[i] == '.')
            {
                hostid[i] = '.';
            }
            else
            {
                hostid[i] = 48 + ((all_binary[i]) | (subnet[i] - 48));
            }
        }

        printf("Host Id = %s\n", hostid);
    }

    if((all_binary[0] == 1) && (all_binary[1] == 1) && (all_binary[2] == 0))
    {
        printf("class = C\n");
        char subnet[36] = "11111111.11111111.11111111.00000000";
       printf("subnet mask = %s\n", subnet);
        for(int j= 0; j<36; j++)
        {
            if(subnet[j] == '.')
            {
                netid[j] = '.';
            }
            else
            {
                netid[j] = 48 + ((subnet[j] - 48) & (all_binary[j]));
            }
            
        }
        
        printf("Network Id = %s\n", netid);

        for(int i = 0; i<36; i++)
        {
            if(subnet[i] == '.')
            {
                hostid[i] = '.';
            }
            else
            {
                hostid[i] = 48 + ((all_binary[i]) | (subnet[i] - 48));
            }
        }

        printf("Host Id = %s\n", hostid);
    }

    if((all_binary[0] == 1) && (all_binary[1] == 1) && (all_binary[2] == 1) && (all_binary[3] == 0))
    {
        printf("class = D\n");
        printf("ther is no net id or host id for class D\n");
        
    }

    if((all_binary[0] == 1) && (all_binary[1] == 1) && (all_binary[2] == 1) && (all_binary[3] == 1))
    {
        printf("class = E\n");
        printf("ther is no net id or host id for class E\n");
        
    }
    
}  

    return 0;
}
