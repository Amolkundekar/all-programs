#include <stdio.h>
#include <stdlib.h>

struct node {

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

 struct node * insert_at_first(struct node *head, int data)
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
    return head;
   
}

struct node * insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while(p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    return head;

}

struct node * insert_at_index(struct node *head, int data, int index)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
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

struct node * insert_at_value(struct node *head, int value, int data)
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
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 26;
    head->next = first;

    first->data = 32;
    first->next = second;

    second->data = 54;
    second->next = third;

    third->data = 97;
    third->next = fourth;

    fourth->data = 64;
    fourth->next = fifth;

    fifth->data = 8;
    fifth->next = head;

    printf("\nlinked list before any insertion\n");
    circular_linked_traverse(head);

    head = insert_at_first(head, 78);
    
    printf("\nlinked list after insertion a node at beginning\n");
    circular_linked_traverse(head);

    head = insert_at_end(head, 112);
    printf("\nlist after insertion at end\n");
    circular_linked_traverse(head);

    head = insert_at_index(head, 45, 3);
    printf("\nlinked list after insertion at given index(index 3)\n");
    circular_linked_traverse(head);

    head = insert_at_value(head, 97, 31);
    printf("\nlinked list after insertion at given value (i.e. 97)\n");
    circular_linked_traverse(head);
    

    return 0;
}
