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
	int k,count=1;
	printf("Enter the value of k:");scanf("%d",&k);
	while(head)
	{
		if(count==k)
		{
			printf("%d",head->data);
			return 0;
		}
		head=head->ptr;
		count++;
	}
}


