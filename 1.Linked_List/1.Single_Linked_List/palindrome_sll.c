#include<stdio.h>
#include<stdlib.h>
struct node *rev(struct node *prev,struct node *curr);
void pali(struct node *);
struct node
{
	int data;
	struct node *ptr;
};
struct node *head=NULL,*curr=NULL,*temp=NULL,*head1=NULL;
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
	pali(head);
}
void pali(struct node *head)
{
	
	struct node *p,*q,*first,*second;
	p=head;
	q=head;
	first=head;
	if(p->ptr==NULL)
	{
		printf("YES");
		return;
	}
	while(1)
	{
		p=((p->ptr)->ptr);
		if(p==NULL)
		{
			second=q->ptr;
			break;
		}
		if(p->ptr==NULL)
		{
			second=((q->ptr)->ptr);
			break;
		}
		q=q->ptr;
	}
	q->ptr=NULL;
	second=rev(NULL,second);
	while(first && second)
	{
		if(first->data==second->data)
		{
			first=first->ptr;second=second->ptr;
		}
		else
		{
			printf("NO");return;
		}
	}
	printf("yes");
}
struct node *rev(struct node *prev,struct node *curr)
{
	if(curr)
	{
		rev(curr,curr->ptr);
		curr->ptr=prev;
	}
	else
	{
		head1=prev;	
	}
	return head1;
}	
