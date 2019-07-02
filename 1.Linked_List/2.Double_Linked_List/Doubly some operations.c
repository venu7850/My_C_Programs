#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lptr,*rptr;
};
struct node *head=NULL,*curr=NULL,*curr1=NULL,*new=NULL,*end=NULL,*prev=NULL,*pprev=NULL;
void display();
main()
{
	int n,i,dnum;
	printf("How many elements::");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the data::");
		curr=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&curr->data);
		if(head==NULL)
		{
			head=curr;
			head->lptr=NULL;
			head->rptr=NULL;
		}
		else
		{
			prev->rptr=curr;
			curr->lptr=prev;
			curr->rptr=NULL;
		}
		prev=curr;
	}
	end=curr;
	void display()
	{
		for(curr=head;(curr!=NULL);curr=curr->rptr)
		{
			printf("%d",curr->data);
		}
		printf("\n");
		for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
		{
			printf("%d",curr1->data);
		}
	}
	display();
	printf("\n");
	printf("Enter the element to delete it prev num::");scanf("%d",&dnum);
	for(curr=head;curr!=NULL;pprev=prev,prev=curr,curr=curr->rptr)
	{
		if(curr->data==dnum)
		{
		pprev->rptr=curr;
		curr->lptr=pprev;

		}
	}
	display();
	printf("\n");
	printf("Enter the element to delete after it::");scanf("%d",&dnum);
	for(curr=head;curr!=NULL;pprev=prev,prev=curr,curr=curr->rptr)
	{
		if(curr->data==dnum)
		{
		curr->rptr=curr->rptr->rptr;
		curr->rptr->lptr=curr;
		}
	}
	display();
	printf("\n");
	new=(struct node*)malloc(sizeof(struct node));
	printf("enter the number insert before 3::");
	scanf("%d",&new->data);
	for(curr=head;curr!=NULL;prev=curr,curr=curr->rptr)
	{
		if(curr->data==3)
		{
			new->lptr=prev;
			new->rptr=curr;
			prev->rptr->lptr=new;
			prev->rptr=new;
		}
	}
	display();
	int rno;
	printf("Enter the number replace with 3::");scanf("%d",&rno);
	for(curr=head;curr!=NULL;prev=curr,curr=curr->rptr)
	{
		if(curr->data==3)
		{
			curr->data=rno;
		}
	}
	display();
	int dno;
	printf("\ndelete the particular element::");scanf("%d",&dno);
	for(curr=head;curr!=NULL;prev=curr,curr=curr->rptr)
	{
		if(curr->data==dno)
		{
			curr=curr->rptr;
			curr->lptr=prev;
			prev->rptr=curr;
		}
	}	
	display();
}
	
