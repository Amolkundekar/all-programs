#include <stdio.h>
#include <stdlib.h>
struct Node* attachbeg(struct Node * head, int d)
{
    
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = d;
    temp->next= head;
}
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node **h;

   
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 78;
    fifth->next = NULL;

    linkedListTraversal(head);
    int data;
    printf("enter data to attach at beg:\t");
    scanf("%d", &data);
    attachbeg(head, data);
    linkedListTraversal(head);
    return 0;
}
 
