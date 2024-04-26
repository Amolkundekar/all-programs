#include <stdio.h>
#include <stdlib.h>

void modulo_division_hashing(int *array, int element, int size)
{
    int index = element % size;
    if (array[index] == -1)
    {
        array[index] = element;
    }
    else
    {
        while (array[index] != -1)
        {
            index = (index + 1) % size;
        }
        array[index] = element;
    }
}

int search_by_hashing(int *array, int element, int size)
{
    int index = element % size;

    if (array[index] == element)
    {
        printf("element found at index %d\n", index);
    }
    else
    {
        int count = 1;
        while ((array[index] != element) && (count != size))
        {
            index = (index + 1) % size;
            count++;
            if (count == size)
            {
                goto end;
            }
        }
        printf("element found at index %d\n", index);
    }

end:
    if (element != array[index])
    {
        printf("element not found\n");
    }
}

int main()
{
    int array[10];
    int input[10];
    int size, element;
    // array = (int *)malloc(10 * sizeof(int));
    printf("enter size\n");
    scanf("%d", &size);
    for (int i = 0; i < 10; i++)
    {
        array[i] = -1;
    }
    printf("enter elements to stote in array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < size; i++)
    {
        modulo_division_hashing(array, input[i], size);
    }

    for (int j = 0; j < size; j++)
    {
        printf("%d\n", array[j]);
    }

    printf("enter element to search\n");
    scanf("%d", &element);
    search_by_hashing(array, element, size);

    return 0;
}