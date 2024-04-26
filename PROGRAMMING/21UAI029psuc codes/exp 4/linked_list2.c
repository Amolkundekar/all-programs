#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; 
};

void traversal(struct node *ptr)
{
    printf("\n");
    while(ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }

}

struct node * insert_at_biginning(struct node *head, int data)
{
    if(head->data == -1)
    {
        head->data = data;
        return head;
    }
    else
    {
        struct node * ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = data;
        ptr->next = head;
        return ptr;
    }
   

}

struct node * insert_at_index(struct node *head, int index, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    
    int i=0;
    while (i != index -1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}

struct node * insert_at_end(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
   
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head;
}

int delete_at_end(struct node *head)
{
    struct node* p;
    struct node* p1;
    p= head;
    p1=NULL;
    while(p ->next!= NULL)
    {
        p1=p;
        p=p->next;
    }
    p1->next = NULL;
    return p->data;
    free(p);
    
}

struct node* delete_at_beg(struct node *head)
{
    struct node* p;
    struct node* p1;

    p=head;
    p1=head->next;
    head= p1;
    printf("\n deleted node is%d\n", p->data);
    free(p);
    
    return head;
}

int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = -1;
    head->next = NULL;


    int choice;
    

    int data, index, deleted;

    while(1)
    {
        printf("\nenter choice\nfor insert at beginning = 1\nfor insert at index = 2\nfor insert at end = 3\nfor delete at end = 4\n for delete at begining =5\nfor traversal = 6\n for exit = 7\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        printf("enter data\n");
        scanf("%d", &data);
        head = insert_at_biginning(head, data);
        break;

        case 2:
        printf("enter data\n");
        scanf("%d", &data);
        printf("enter index\n");
        scanf("%d", &index);
        head = insert_at_index(head, index, data);
        break;

        case 3:
        printf("enter data\n");
        scanf("%d", &data);
        head = insert_at_end(head, data);
        break;

        case 4:
        deleted = delete_at_end(head);
        printf("deleted element is %d\n", deleted);
        break;

        case 5:
        head = delete_at_beg(head);
        // printf("deleted element is %d\n", deleted);
        break;

        case 6:
        traversal(head);
        break;

        case 7:
        goto end;
        break;
        
        default:
        printf("enter proper input\n");
            break;
        }
    }

end:
   
    return 0;
}
