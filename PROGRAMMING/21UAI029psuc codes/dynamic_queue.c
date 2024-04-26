
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int rear;
    int size;
    int *array;
};

int isfull(struct queue *q)
{
    if ((q->rear == (q->front - 1)) || ((q->front == 0) && (q->rear == q->size - 1)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(struct queue *q)
{
    if ((q->front == -1) || (q->rear == -1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int data)
{
    if (isfull(q))
    {
        printf("queue is full\n");
    }
    else
    {
        if (q->front == -1)
        {
            q->front = 0;
            q->rear = 0;
            q->array[q->rear] = data;
        }
        else
        {
            q->rear++;
            q->array[q->rear] = data;
        }
    }
}

void dqueue(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue is empty\n");
    }
    else
    {
        if (q->front == 0 && q->rear == 0)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
        {
            q->front++;
        }
    }
}

void display(struct queue *q)
{
    int i=0;
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d\n", q->array[i]);
    }
}

int main()
{
    struct queue q;
    q.front = -1;
    q.rear = -1;
    q.size = 5;
    q.array = (int *)malloc(q.size * sizeof(int));


    printf("after dequeing\n");
    dqueue(&q);
    display(&q);
    printf("\n\n");


    printf("after enqueueing\n");
    enqueue(&q, 34);
    display(&q);
    printf("\n\n");

    printf("after enqueueing\n");
    enqueue(&q, 78);
    display(&q);
    printf("\n\n");

    printf("after enqueueing\n");
    enqueue(&q, 85);
    display(&q);
    printf("\n\n");

    printf("after enqueueing\n");
    enqueue(&q, 2);
    display(&q);
    printf("\n\n");

    printf("after enqueueing\n");
    enqueue(&q, 556);
    display(&q);
    printf("\n\n");

    printf("after enqueueing\n");
    enqueue(&q, 7);
    display(&q);
    printf("\n\n");

    printf("after dequeueing\n");
    dqueue(&q);
    display(&q);
    printf("\n\n");

   
    printf("after dequeing\n");
    dqueue(&q);
    display(&q);
    printf("\n\n");

    return 0;
}
