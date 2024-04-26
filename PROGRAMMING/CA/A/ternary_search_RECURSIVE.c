#include <stdio.h>
#include <time.h>

// this function is used to search element recursively
int ternary_search(int array[10], int si, int ei, int key)
{

    if (si <= ei)
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
            return ternary_search(array, si, (mid1 - 1), key);
        }

        else if (array[mid1] < key && array[mid2] > key)
        {
            return ternary_search(array, (mid1 + 1), (mid2 - 1), key);
        }
        else
        {
            return ternary_search(array, (mid2 + 1), ei, key);
        }
    }
    else
    {
        return -1;
    }
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

    clock_t start, end;
    double diff;

    start = clock();
    // if input is supposed to be given by user
    // printf("enter the sorted array\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &array[i]);
    // }

    printf("predefined array\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", array[i]);
    }

    int key, status, choice;

    
    

        
            printf("\nenter key to search\n");
            scanf("%d", &key);

            status = ternary_search(array, 0, 9, key);
            end = clock();
            if (status == -1)
            {
                printf("key not found\n");
            }
            else
            {
                printf("key found\n");
                printf("\nindex of %d is %d\n", key, status);
            }
        

    
           
       
        // end = clock();
        diff = (double)(end - start) / CLOCKS_PER_SEC;
        printf("total time required is :%lf", diff);
    
    // end = clock();
    // diff = (double)(end - start)/CLOCKS_PER_SEC;
    // printf("total time required is :%lf", diff);

    return 0;
}
