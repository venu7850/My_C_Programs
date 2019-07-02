#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int print(struct node *head);
struct node
{
	int data;
	struct node *ptr;
};
struct node *head=NULL,*temp=NULL,*curr=NULL,*temp1=NULL;
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
	temp1=head;
	printf("length is %d",print(head));

}
int print(struct node *h)
{
	if(h==NULL)
	{
		return 0;
	}
	else
	{
		return 1+print(h->ptr);
	}
}

