#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void traverse(struct node *n)
{
    do
    {
        printf("%d\n", n->data);
        n = n->next;
    }while(n != NULL);
}

struct node *insert_at_first(struct node *head, int data)
{
    struct node *N0 = (struct node *)malloc(sizeof(struct node));
    N0->data = data;
    N0->next = head;
    head->prev = N0;
    N0->prev = NULL;
    head = N0;
    return head;
}

struct node *insert_at_last(struct node *head, int data)
{
    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->data = data;
    struct node *p;
    p = head;

    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = N;
    N->next = NULL;
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

struct node *insert_at_value(struct node *head, int data, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p;
    p = head;
    while(p->data != value)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    struct node *N1;
    struct node *N2;
    struct node *N3;
    struct node *N4;
    struct node *N5;
    struct node *N6;

    N1 = (struct node *)malloc(sizeof(struct node));
    N2 = (struct node *)malloc(sizeof(struct node));
    N3 = (struct node *)malloc(sizeof(struct node));
    N4 = (struct node *)malloc(sizeof(struct node));
    N5 = (struct node *)malloc(sizeof(struct node));
    N6 = (struct node *)malloc(sizeof(struct node));

    N1->data = 26;
    N1->prev = NULL;
    N1->next = N2;

    N2->data = 6;
    N2->prev = N1;
    N2->next = N3;

    N3->data = 7;
    N3->prev = N2;
    N3->next = N4;

    N4->data = 45;
    N4->prev = N3;
    N4->next = N5;

    N5->data = 98;
    N5->prev = N4;
    N5->next = N6;

    N6->data = 27;
    N6->prev = N5;
    N6->next = NULL;

    printf("without any insertion\n");
    traverse(N1);

   /* N1 = insert_at_first(N1,5);
    N1 = insert_at_first(N1,14);
    printf("insertion at first\n");
    traverse(N1); */

  /*  N1 = insert_at_last(N1, 67);
    N1 = insert_at_last(N1, 7);
    printf("insertion at last\n");
    traverse(N1); */

  /*  N1 = insert_at_index(N1, 56, 4);
    printf("insertion at given index\n");
    traverse(N1); */

    N1 = insert_at_value(N1, 71, 98);
    printf("insertion after given value\n");
    traverse(N1);

    return 0;
}