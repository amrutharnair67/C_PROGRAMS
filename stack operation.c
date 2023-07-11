#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int e)
{
	if(top+1==N)
	{
		printf("Stack is full");
	}else
	{
		top=top+1;
		stack[top]=e;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("\npoped %d",stack[top]);
		top=top-1;
	}
}
void peak()
{
	if(top==-1)
	{
		printf("stack is empty");	
	}
	else
	{
		printf("\nTop Elemnt is %d",stack[top]);
	}
}
void main()
{
	push(10);
	push(20);
	push(30);
	pop();
	peak();
	pop();
	pop();
	
}
