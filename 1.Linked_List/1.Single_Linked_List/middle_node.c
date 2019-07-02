#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int print(struct node *head);
struct node
{
	int data;
	struct node *ptr;
};
struct node *head=NULL,*temp=NULL,*curr=NULL,*temp1=NULL,*slow=NULL,*fast=NULL;
int main()
{
	int n,i;
	printf("Enter number of elements::");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		curr=(struct node *)malloc(sizeof(struct node));
		printf("enter the data::");scanf("%d",&curr->data);
		if(head==NULL)
		{
			head=curr;
		}
		else
		{
			temp->ptr=curr;
		}
		temp=curr;
	}
	curr->ptr=NULL;
	slow=head;
	fast=head;
	while(fast && fast->ptr)
	{
		slow=slow->ptr;
		fast=fast->ptr->ptr;
	}
	printf("%d\n",slow->data);
}


