#include <stdio.h>
void push(int stk[10], int n, int *t, int ele)
{
	if (*t == n - 1)
	{
		printf("\n Stack is full");
	}
	else
	{
		(*t)++;
		stk[*t] = ele;
	}
}
void display(int stk[10], int t)
{
	int i;
	printf("\n");
	for (i = 0; i <= t; i++)
		printf("%d ", stk[i]);
}
int pop(int stk[10], int *t)
{
	int temp;
	if (*t == -1)
	{
		printf("\n stack is empty");
	}
	else
	{
		temp = stk[*t];
		(*t)--;
		return temp;
	}
}
int main(int argc, char *argv[])
{
	int stack[10], size = 5, top = -1, element;
	printf("\nEnter element\n");
	scanf("%d", &element);
	push(stack, size, &top, element);
	printf("\nEnter element\n");
	scanf("%d", &element);
	push(stack, size, &top, element);
	push(stack, size, &top, 15);
	display(stack, top);
	element = pop(stack, &top);
	printf("\n poped element is %d", element);
	display(stack, top);
	return 0;
}
