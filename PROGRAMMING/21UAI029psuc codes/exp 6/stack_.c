#include <stdio.h>

void push(int stack[], int *top, int size, int element)
{
    if (*top < size)
    {
        *top = *top + 1;
        stack[*top] = element;
    }
    else
    {
        printf("stack is full");
    }
}
int pop(int stack[], int *top)
{
    int temp;
    if (*top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        temp = stack[*top];
        *top = *top - 1;
        
    }
    return temp;
}
void display(int stack[], int *top)
{
    int i;
    printf("\n\n");
    for (i = 0; i <= *top; i++)
    {
        printf("%d\n", stack[i]);
    }
}

int main(int argc, char *argv[])
{
    int stack[10];
    int top = -1;
    
    int element;
    int size = 5, choice;

    while (choice != 4)
    {
        printf("stack operations\n");
        printf("1] push\n");
        printf("2] pop\n");
        printf("3] Display\n");
        printf("4] exit\n");

        printf("enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("enter element:\n");
            scanf("%d", &element);
            push(stack, &top, size, element);
            break;

        case 2:
            element = pop(stack, &top);
            printf("popped element is:%d\n", element);
            break;

        case 3:
            display(stack, &top);
            break;
        case 4:
            printf("exting");
            break;

        default:
            printf("make proper choice\n");
        }
    }

    return 0;
}
