#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// this function is used to perform push operation
struct node *push(struct node *t, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = t;
    t = new;
    return t;
}
// this function is used to perform pop operation
struct node *pop(struct node *t)
{
    int deleted;
    if (t == NULL)
    {
        printf("empty\n");
    }
    else
    {
        struct node *temp;
        
        printf("deleted node is:%d\n", t->data);
        t = t->next;
        free(temp);
        return t;
    }
}

// this function is used to perform traverse operation
void display(struct node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *top;
    top = NULL;
    int data, choice;
    while (1)
    {
        printf("enter your choice\n1] push =1 \n2] pop = 2\n3] exit=3\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter your data\n");
            scanf("%d", &data);
            printf("\n");
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