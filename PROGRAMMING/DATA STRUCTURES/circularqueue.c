/* Circular Queue implementation in C

#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull()
{
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
    return 1;
  return 0;
}

// Check if the queue is empty
int isEmpty()
{
  if (front == -1)
    return 1;
  return 0;
}

// Adding an element
void enQueue(int element)
{
  if (isFull())
    printf("\n Queue is full!! \n");
  else
  {
    if (front == -1)
      front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("\n Inserted -> %d", element);
  }
}

// Removing an element
int deQueue()
{
  int element;
  if (isEmpty())
  {
    printf("\n Queue is empty !! \n");
    return (-1);
  }
  else
  {
    element = items[front];
    if (front == rear)
    {
      front = -1;
      rear = -1;
    }
    // Q has only one element, so we reset the
    // queue after dequeing it. ?
    else
    {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}

// Display the queue
void display()
{
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else
  {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE)
    {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

int main()
{
  // Fails because front = -1
  deQueue();

  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  enQueue(6);

  display();
  deQueue();

  display();

  enQueue(7);
  display();

  // Fails to enqueue because front == rear + 1
  enQueue(8);

  return 0;
}*/

#include <stdio.h>
void enqueue(int *queue[20], int *front, int *rear, int size, int element)
{
  if (*front == 0 && *rear == (size - 1) || *front == (*rear + 1))
  {
    printf("queue is full\n");
  }
  else
  {
    if (*front == -1 && *rear == -1)
    {
      *rear = 0;
      *front = 0;
      size = +1;

      queue[*rear] = element;
    }
    else
    {
      size = +1;
      *rear = (*rear + 1) % size;
      queue[*rear] = element;
    }
  }
}

void display(int queue[20], int front, int rear)
{
  int i;
  for (i = front; i < rear; i++)
  {
    printf("%d\n", queue[i]);
  }
}
int dequeue(int *queue, int *front, int *rear)
{


}

int main()
{
  int queue[20];
  int *front= -1, *rear= -1;
  int size, operation, element;

  printf("enter size of queue:\n");
  scanf("%d", &size);

  printf("choose operation:-\n enqueue = 1\n dequeue = 2\n exit = 3\n");
  scanf("%d", &operation);

  
  
    switch (operation)
    {
    case 1:
      printf("enter element\n");
      scanf("%d", &element);
      enqueue(queue, &front, &rear, size, element);
      break;

    case 2:
      dequeue(queue, &front, &rear);
      break;

    case 3:
      printf("exitingggg\n");
      display(queue, front, rear);
    }
  
}