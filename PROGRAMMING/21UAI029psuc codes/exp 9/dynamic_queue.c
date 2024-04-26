
#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    // printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf(" %d\t", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int data)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    if (new == NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        new->data = data;
        new->next = NULL;
        if (f == NULL)
        {
            f = r = new;
        }
        else
        {
            r->next = new;
            r = new;
        }
    }
}

int dequeue()
{
    int data = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        data = ptr->data;
        free(ptr);
    }
    return data;
}

int main()
{

    int choice, data;
    while (1)
    {
        printf("enter your choice\n 1] Enqueue\n 2] Dequeue\n 3] Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data\n");
            scanf("%d", &data);
            enqueue(data);
            printf("\n\n");
            traversal(f);
            printf("\n\n");
            break;

        case 2:
            printf("\n\n");
            printf("Deleted  element :%d\n", dequeue());
            printf("\n\n");
            traversal(f);
            printf("\n\n");
            break;

        case 3:
            goto end;
            break;

        default:
            printf("make proper choice!!!!!\n");
            break;
        }
    }
end:
    return 0;
}
