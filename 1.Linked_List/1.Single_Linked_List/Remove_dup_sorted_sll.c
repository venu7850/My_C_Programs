#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *ptr;
};
void fun(struct node *start);
struct node *head=NULL,*curr=NULL,*temp=NULL,*second=NULL,*temp1=NULL,*first=NULL,*head1=NULL;
int main()
{
	int n,i,len=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		curr=(struct node*)malloc(sizeof(struct node));
		if(curr==NULL)
		{
			printf("Memory Error");
			return 0;
		}
		scanf("%d",&curr->data);
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
	fun(head);
	while(head){
		printf("%d",head->data);head=head->ptr;
	}
	
}
void fun(struct node *start)
{
	struct node *p,*q;
	p=start;
	while(p && p->ptr)
	{
		if(p->data==p->ptr->data)
		{
			q=p->ptr->ptr;
			free(p->ptr);
			p->ptr=q;
		}
		else
		{
			p=p->ptr;
		}
	}
}


