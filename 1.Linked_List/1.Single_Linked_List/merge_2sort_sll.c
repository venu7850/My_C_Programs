#include<stdio.h>
#include<stdlib.h>
struct node *create(int n);
struct node *merge_list(struct node *,struct node *);
struct node
{
	int data;
	struct node *ptr;
};
struct node *head1,*head2,*head;
int main()
{
	int n1,n2;
	printf("enter size of list1::");scanf("%d",&n1);
	head1=create(n1);
	printf("enter size of list2::");scanf("%d",&n2);
	head2=create(n2);	
	head=merge_list(head1,head2);
	while(head){
		printf("%d",head->data);head=head->ptr;
	}
}
struct node *create(int n)
{
	struct node *head=NULL,*temp=NULL,*curr=NULL;
	int i;
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
	return head;
}
struct node *merge_list(struct node *list1,struct node *list2)
{
	struct node *temp,*merge;
	if(list1==NULL)return list2;
	else if(list2==NULL)return list1;
	if(list1->data<=list2->data)
	{
		merge=list1;
		list1=list1->ptr;
	}
	else
	{
		merge=list2;
		list2=list2->ptr;
	}
	temp=merge;
	while(list1 && list2)
	{
		if(list1->data<=list2->data)
		{
			temp->ptr=list1;
			temp=temp->ptr;
			list1=list1->ptr;
		}
		else
		{
			temp->ptr=list2;
			temp=temp->ptr;
			list2=list2->ptr;
		}
	}
	temp->ptr=(list1==NULL)?list2:list1;
	return merge;
}
	
