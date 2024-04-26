#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

struct node *push(struct node *t, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = t;
    t = new;
    return t;
}

struct node* pop(struct node *t)
{
    if(t == NULL)
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
    int i=0;
    while(ptr != NULL)
    {
        printf("%d] %d\n", i, ptr->data);
        ptr = ptr->next;
        
    }
}

int main()
{
    struct node *top;
    top = NULL;

    top = push(top, 26);
    display(top);
    printf("\n\n");
    top = push(top, 2);
    display(top);
    printf("\n\n");
    top = push(top, 6);
    display(top);
    printf("\n\n");

    printf("after removing from stack\n");
    top = pop(top);
    display(top);
    printf("\n\n");
    top = pop(top);

    display(top);
    printf("\n\n");

   
    return 0;
}