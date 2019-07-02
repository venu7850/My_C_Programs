#include<stdio.h>
int max=8;
int stack[8];
int top=-1;
int min;
int push(int);int pop();int isfull();int isempty();
void getmin();
int main()
{
	push1(10);
	push(20);
	push(5);
	push(15);
	getmin();
	pop();
	getmin();
	push(2);
	getmin();
	pop();
	getmin();
	pop();
	getmin();
}
void getmin()
{
	printf("%d\n",min);
}
int push1(int data)
{
	if(!isfull())
	{
		stack[++top]=data;
		min=data;
	}
	else{printf("stack is full\n");return 0;}
}
int push(int data)
{
	int diff;
	if(!isfull())
	{
		if(data<=min)
		{
		diff=data-min;
		stack[++top]=diff;
		min=data;
		}
		else
		{
			stack[++top]=data;
		}
	}
	else
	{
		printf("stack is full\n");
		return 0;
	}
}
int pop()
{
	int data;
	if(!isempty())
	{
		if(stack[top]<min)
		{
			min=min-(stack[top]);
		}
		data=stack[top--];
		return data;
	}
	else{printf("stack is underflow\n");return 0;}
}
int isfull()
{
	if(top==max)return 1;
	else return 0;
}
int isempty()
{
	if(top==-1)return 1;
	else return 0;
}


