#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void circular_linked_traverse(struct node *head)
{
    struct node *ptr;

    ptr = head;
    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}

struct node *insert_at_first(struct node *head, int data)
{
    if (head->data == -1)
    {
        head->data= data;

        return head;
    }
    else
    {
        struct node *p;
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = data;
        p = head->next;
        while (p->next != head)
        {
            p = p->next;
        }

        p->next = ptr;
        ptr->next = head;
        head = ptr;
        return ptr;
    }
}

struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    return head;
}

struct node *insert_at_index(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p;
    p = head;
    int i = 0;
    while (i != (index - 1))
    {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insert_at_value(struct node *head, int value, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->data != value)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    int choice, data, value, index;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = -1;
    head->next = NULL;
    // struct node *first = (struct node *)malloc(sizeof(struct node));
    // struct node *second = (struct node *)malloc(sizeof(struct node));
    // struct node *third = (struct node *)malloc(sizeof(struct node));
    // struct node *fourth = (struct node *)malloc(sizeof(struct node));
    // struct node *fifth = (struct node *)malloc(sizeof(struct node));

    // head->data = 26;
    // head->next = first;

    // first->data = 32;
    // first->next = second;

    // second->data = 54;
    // second->next = third;

    // third->data = 97;
    // third->next = fourth;

    // fourth->data = 64;
    // fourth->next = fifth;

    // fifth->data = 8;
    // fifth->next = head;
    while (1)
    {
        printf("enter your choice\ninsert at first=1 \ninsert at end=2 \ninsert at value=3 \ninsert at index=4 \n traversal=5 \nexit=6\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            printf("enter data:\t");
            scanf("%d", data);
            head = insert_at_first(head, data);
             break;

            case 2 :
            printf("enter data:\t");
            scanf("%d", data);
            head = insert_at_end(head, data);
            break;

            case 3:
            printf("enter value:\t");
            scanf("%d", value);
            head = insert_at_end(head, value); 
            break;


            case 4:
            printf("enter index:\t");
            scanf("%d", index);
            printf("enter data:\t");
            scanf("%d", data);
            head = insert_at_index(head, data, index); 
             break;

            case 5:
            circular_linked_traverse(head);
            break;

            case 6 :
            goto end;
            break;

            default:
            printf("make prpoer choice\n");
            break;
        }
    }
    end :

    // printf("\nlinked list before any insertion\n");
    // circular_linked_traverse(head);

    // head = insert_at_first(head, 78);

    // printf("\nlinked list after insertion a node at beginning\n");
    // circular_linked_traverse(head);

    // head = insert_at_end(head, 112);
    // printf("\nlist after insertion at end\n");
    // circular_linked_traverse(head);

    // head = insert_at_index(head, 45, 3);
    // printf("\nlinked list after insertion at given index(index 3)\n");
    // circular_linked_traverse(head);

    // head = insert_at_value(head, 97, 31);
    // printf("\nlinked list after insertion at given value (i.e. 97)\n");
    // circular_linked_traverse(head);

    return 0;
}
