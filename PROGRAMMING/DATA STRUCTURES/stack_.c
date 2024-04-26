#include <stdio.h>


//this function is used to add data to the stack
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



//

int pop(int stack[], int *top)
{
    int temp;
    if (*top == -1)
    {
        printf("stack is empty");
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

    while (1)
    {
        printf("stack operations\n 1] push\n 2] pop\n 3] exit\n");

        printf("enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("enter element:\n");
            scanf("%d", &element);
            push(stack, t, size, element);
            display(stack, t);
            break;
            

        case 2:
            element = pop(stack, t);
            printf("popped element is:%d", element);
            display(stack, t);
            break;

            display(stack, t);

        case 3:
            goto end;
            break;

        default:
            printf("make proper choice\n");
        }
    }
end:
    return 0;
}
