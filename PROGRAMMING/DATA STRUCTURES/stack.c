#include<stdio.h>
void push(int stack[], int  *top, int size, int element);
{
if(top==(size-1))
    printf("stack is full\n");

else
{
    top = top + 1;
    stack[top]=element;

}
}
int pop(int stack[], int *top)
{
    if(*top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        top =top -1;

        size = size-1;
        
        return 1
    }
}

int main()
{
int stack[10];
int top = -1;
int element;
int size;
push(stack[], top, element);
pop(stack[], top);

}
