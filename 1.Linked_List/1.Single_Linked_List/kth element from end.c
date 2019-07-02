#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int print(struct node *head);
struct node
{
	int data;
	struct node *ptr;
};
struct node *head=NULL,*temp=NULL,*curr=NULL,*temp1=NULL,*p=NULL,*q=NULL;
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
	p=head,q=head;
	int count=1,k=2;
	for(count=1;count<k && p!=NULL;count++)
	{
		p=p->ptr;
	}
	if(p==NULL)
	{
		printf("Error");
		return 0;
	}
	while(p->ptr!=NULL)
	{
		p=p->ptr;
		q=q->ptr;
	}
	printf("%d",q->data);
}
	



