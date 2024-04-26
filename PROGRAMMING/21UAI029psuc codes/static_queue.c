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
    int *f , *r;
    f = &front, r = &rear;
    int size = 5;
    int element;

    enqueue( queue, &front, &rear, size,12);
    enqueue( queue, &front, &rear, size,13);
    enqueue( queue, &front, &rear, size,14);
    enqueue( queue, &front, &rear, size,15);
    enqueue( queue, &front, &rear, size,16);
    enqueue( queue, &front, &rear, size,17);

    display(  queue, &front ,  &rear);
    printf("\n");

    dequeue(queue, &front , &rear, size);
    display(  queue, &front ,  &rear);



}