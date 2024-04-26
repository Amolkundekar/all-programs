#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void traversal(struct node* head)
{
    
    struct node *ptr;
    ptr = head;
    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
        
    } while (ptr != head);
}
struct node* createlist(struct node *head, int data)
{
    if(head->data == -1)
    {
        head->data=data;
        head->next = head;
        head->prev = head;
        return head;
    }
}

struct node *insert_at_first(struct node *head, int data)
{
        struct node *ptr;
        
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = data;
        ptr = head->prev;
        head->prev=p;
        p->next = head;
        p->prev = ptr;
        ptr->next = p;

        return p;
    
}
int main()
{
    struct node *head;
    head->data = -1;
    // head->next = NULL;
    // head->prev = NULL;

    int choice,data;
    while(1)
    {
        printf("enter your choice\n for creation=1\n for traversal=2\n for insert at first = 3\n for exit=4 \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            printf("enter data\n");
            scanf("%d", &data);
            head = createlist( head,  data);
            break;

            case 2:
            traversal(head);
            break;

            case 3:
            printf("enter data\n");
            scanf("%d", &data);
            head = insert_at_first( head,  data);
            break;

            case 4:
            goto end;

            default:
            printf("make proper choice\n");
            break;


        }
    }
    end:

    return 0;
}