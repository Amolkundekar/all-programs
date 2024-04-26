#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *push(struct node *t, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = t;
    t = ptr;
    return t;
}

struct node *pop(struct node *t)
{
    if (t == NULL)
    {
        printf("empty\n");
    }
    else
    {
        struct node *temp;
        temp = t;
        t = t->next;
        free(temp);
        return t;
    }
}

void display(struct node *ptr)
{
    int i = 0;
    printf("\n\n");
    // printf("displaying stack\n");
    while (ptr != NULL)
    {
        printf(" %d\n", ptr->data);
        ptr = ptr->next;
        
    }
    printf("\n\n");
}

int main()
{
    struct node *top;
    top = NULL;
    int data, choice;
    while (1)
    {
        printf("enter your choice\n push =1 \npop = 2\n exit=3\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter your data\n");
            scanf("%d", &data);
            top = push(top, data);
            display(top);
            printf("\n\n");
            break;

        case 2:
             top = pop(top);
            display(top);
            printf("\n\n");
            break;

        case 3:
            goto end;
            break;

        default:
        printf("make proper choice\n");
        break;
        }
    }
    end:


    return 0;
}