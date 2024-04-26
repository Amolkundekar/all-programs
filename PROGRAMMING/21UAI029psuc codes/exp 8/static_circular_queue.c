#include <stdio.h>
void enqueue(int queue[5], int *f, int *r, int size, int element)
{
    if ((*f == 0 && *r == (size - 1)) || *f == *r + 1)
    {
        printf("queue is full \n");
    }
    else
    {
        if (*r == -1 && *f== -1)
        {
            *r = 0;
            *f = 0;
            queue[*r] = element;
        }
        else
        {
            *r = (*r + 1) % size;
            queue[*r] = element;
        }
    }
}
int dequeue(int queue[5], int *f, int *r, int size)
{
    int temp;
    if ( *f == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        if(*f == *r)
        {
            temp = queue[*f];
            *r = -1;
            *f = -1;
            return temp;
        }
        else
        {
            temp = queue[*f];
            *f = (*f +1) % size;
            return temp;
        }

    }
}
void display( int queue[5], int *f ,  int *r)
{
    for(int i = *f ; i<= *r; i++)
    {
        printf("%d\t", queue[i]);
    }
}
int main()
{
    int queue[5];
    int front = -1, rear = -1;
    int size = 5;
    int data, choice;

    while(1)
    {

        printf("enter your choice\n 1] enqueue = 1\n 2] dequeue = 2\n 3]exit = 3\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("enter data\n");
            scanf("%d", &data);
            enqueue( queue, &front, &rear, size,data);
            printf("\n\n");
            display(queue, &front, &rear);
            printf("\n\n");
            break;

            case 2:
            dequeue( queue, &front, &rear, size);
            printf("\n\n");
            display(queue, &front, &rear);
            printf("\n\n");
            break;

            case 3:
            goto end;
            break;

            default:
            printf("make proper choice\n");
            printf("\n\n");
            break;

        }
    }

    end:
    return 0;



}