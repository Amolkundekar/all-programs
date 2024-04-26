#include <stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n-> right = NULL;

    return n;
}
int main()
{
    struct node *r;
    p  = (struct node*)malloc(sizeof(struct node));
    p->data=2;
    p->left = NULL;
    p->right= NULL;
    

    return 0;
}