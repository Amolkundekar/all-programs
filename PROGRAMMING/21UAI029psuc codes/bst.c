#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void preorder(struct node *r)
{
    if(r != NULL)
    {
        printf("%d ", r->data);
        preorder(r->left);
        preorder(r->right);
    }
}

void postorder(struct node *r)
{
    if(r != NULL)
    {
        postorder(r->left);
        postorder(r->right);
        printf("%d ", r->data);
    }
}

void inorder(struct node *r)
{
    if(r != NULL)
    {
        inorder(r->left);
        printf("%d ", r->data);
        inorder(r->right);
    }
}

struct node *create_node(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;

    return p;
}

int main()
{
    //ONLY TREE
    // struct node *r;
    // r = create_node(56);

    // struct node *l1;
    // l1 = create_node(26);
    // r->left = l1;

    // struct node *l2;
    // l2 = create_node(85);
    // l1->right = l2;

    // struct node *l3;
    // l3 = create_node(285);
    // l2->left = l3;

    // struct node *r1;
    // r1 = create_node(2);
    // r->right = r1;

    // struct node *r2;
    // r2 = create_node(8);
    // r1->right = r2;

    // struct node *lr;
    // lr = create_node(31);
    // r1->left = lr;

    // struct node *r3;
    // r3 = create_node(5);
    // r2->right = r3; 


    //BINARY TREE
    struct node *s;
    s = create_node(5);

    struct node *s1;
    s1 = create_node(3);
    s->left = s1; 

    struct node *s2;
    s2 = create_node(45);
    s->right = s2;

    struct node *s3;
    s3 = create_node(1);
    s1->left = s3;

    struct node *s4;
    s4 = create_node(14);
    s2->left = s4;

    struct node *s5;
    s5 = create_node(56);
    s2->right = s5;

    struct node *s6;
    s6 = create_node(10);
    s4->left = s6;

    printf("preorder\n");
    preorder(s);
    printf("\n");
    printf("postorder\n");
    postorder(s);
    printf("\n");
    printf("inorder\n");
    inorder(s);


    return 0;
}