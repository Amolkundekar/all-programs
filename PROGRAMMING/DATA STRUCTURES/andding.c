#include <stdio.h>
#include <string.h>
void binary(int array[])
{
     int tot[8];
     int arr[8];
     unsigned int mask = 128;
     int j = 7;
     printf("The binary representation of the IP address is \n");
     for (int i = 0; i < 4; i++)
     {
          while (mask > 0)
          {
               if ((array[i] & mask) == 0)
                    arr[j] = 0;
               else
                    arr[j] = 1;
               mask = mask >> 1; // Right Shift
               j--;
          }
          for (int x = 7; x >= 0; x--)
          {
               if (i == 0)
               {
                    tot[x] = arr[x];
               }
               printf("%d", arr[x]);
          }
          if (i != 3)
          {
               printf(".");
          }
          j = 7;
          mask = 128;
     }
     printf("\n");
     int n = 7;
     ;
     if (tot[n] == 0)
     {
          printf("Class of given IP adress is A\n");
     }
     if (tot[n] == 1 && tot[n - 1] == 0)
     {
          printf("Class of given IP adress is B\n");
     }
     else if (tot[n] == 1 && tot[n - 1] == 1 && tot[n - 2] == 0)
     {
          printf("Class of given IP adress is C\n");
     }
     else if (tot[n] == 1 && tot[n - 1] == 1 && tot[n - 2] == 1 && tot[n - 3] == 0)
     {
          printf("Class of given IP adress is D\n");
     }
     else if (tot[n] == 1 && tot[n - 1] == 1 && tot[n - 2] == 1 && tot[n - 3] == 1)
     {
          printf("Class of given IP adress is E\n");
     }
     else
     {
          printf("Enter Correct IP address");
     }
}

/*int andding()
{
     char netid[36];
     for(int i =0; )
     {


     }
     if()
     {


     }

}
}
*/
int main()
{
     int n1, n2, n3, n4;
     char ip[16];
     printf("Enter the IP address in decimal Format \n");
     scanf("%s", ip);
     sscanf(ip, "%d.%d.%d.%d", &n1, &n2, &n3, &n4);
     int array[4] = {n1, n2, n3, n4};
     binary(array);
}