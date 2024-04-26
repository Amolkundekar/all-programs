#include <stdio.h>

// this function is used to search element recursively
int ternary_search(int array[10], int si, int ei, int key)
{

    while(si <= ei)
    {
        int mid1 = si + (ei - si) / 3;
        int mid2 = ei - (ei - si) / 3;
        if (array[mid1] == key)
        {
            return mid1;
        }
        else if (array[mid2] == key)
        {
            return mid2;
        }
        else if (array[mid1] > key)
        {
            si=0;
            ei= mid1-1;
        }

        else if (array[mid1] < key && array[mid2] > key)
        {
            si= mid1 +1;
            ei = mid2-1;
        }
        else
        {
            si = mid2 +1;
        }
    }
    
    
        return -1;
    
}

int main()
{
    
    int si, ei, size;

    printf("enter the size of the array\n");
    scanf("%d", &size);
    int array[size] ;
    printf("Enter array elemn\n");
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // if input is supposed to be given by user
    // printf("enter the sorted array\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &array[i]);
    // }

    // printf("predefined array\n");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\t", array[i]);
    // }

    int key, status, choice;

    while (1)
    {
        printf("\n ENTER YOUR CHOICE\n 1] SEARCH\n 2] EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("\nenter key to search\n");
            scanf("%d", &key);

            status = ternary_search(array, 0, size, key);
            if (status == -1)
            {
                printf("key not found\n");
            }
            else
            {
                printf("key found\n");
                printf("\nindex of %d is %d\n", key, status);
            }
            break;

        case 2:
            printf("exiting!!!!\n");
            goto end;
            break;

        default:
            printf("make proper choice\n");
        }
    }
end:
    return 0;
}

