#include <stdio.h>

void push(int stack[], int *top, int size, int element)
{
    if (*top <= (size - 1))
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
        return temp;
    }
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
    int *t;
    t = &top;
    int element;
    int size = 5, choice;

    printf("initially\n");
    pop(stack, t);
    printf("after performing push operation\n");
    push(stack, t, size, 12);
    push(stack, t, size, 192);
    push(stack, t, size, 15);
    push(stack, t, size, 13);
    display(stack, t);
    printf("\nafter performing opp operation\n");
    pop(stack, t);
    display(stack, t);
    pop(stack, t);
    display(stack, t);
    pop(stack, t);
    display(stack, t);
    pop(stack, t);
    display(stack, t);
    pop(stack, t);
    display(stack, t);
    pop(stack, t);
    display(stack, t);
    /*while (choice != 4)
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
            push(stack, t, size, element);
            break;

        case 2:
            element = pop(stack, t);
            printf("popped element is:%d", element);
            break;

        case 3:
            display(stack, t);
            break;
        case 4:
            printf("exting");
            break;

        default:
            printf("make proper choice\n");
        }
        return 0;
    }*/
}
