#include<stdio.h>
int max=8;
int stack[8];
int top=-1;
int push(int);int pop();int isfull();int isempty();
int main()
{
	int n,i;
	scanf("%d",&n);
	int price[n],span[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&price[i]);
	}
	push(0);
	span[0]=1;
	for(i=1;i<n;i++)
	{
		while((price[stack[top]]<=price[i]) && !isempty())
		{
			pop();
		}
		span[i]=(isempty())?i+1:(i-stack[top]);
		push(i);
	}
	for(i=0;i<n;i++){printf("%d\t",span[i]);}
}
int push(int data)
{
	if(!isfull()){stack[++top]=data;}
	else{printf("stack is full\n");return 0;}
}
int pop()
{
	int data;
	if(!isempty())
	{
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


