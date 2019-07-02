#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lptr,*rptr;
};
int n,i;
struct node *head=NULL,*curr=NULL,*prev=NULL,*end=NULL,*curr1=NULL,*new=NULL;
main()
{
	printf("Enter how may elements::");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		curr=(struct node*)malloc(sizeof(struct node));
		printf("enter the data::");scanf("%d",&curr->data);
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
	for(curr=head;(curr!=NULL);curr=curr->rptr)
	{
	printf("%d",curr->data);
	}
	printf("\n");
	for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
	{
	printf("%d",curr1->data);
	}
	printf("\n");
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element insert at the beg::");
	scanf("%d",&new->data);
	new->rptr=head;
	head->lptr=new;
	new->lptr=NULL;
	head=new;
	for(curr=head;(curr!=NULL);curr=curr->rptr)
	{
	printf("%d",curr->data);
	}
	printf("\n");
	for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
	{
	printf("%d",curr1->data);
	}
	printf("\n");
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element insert at end::");
	scanf("%d",&new->data);
	new->lptr=end;
	end->rptr=new;
	new->rptr=NULL;
	end=new;
	for(curr=head;(curr!=NULL);curr=curr->rptr)
	{
	printf("%d",curr->data);
	}
	printf("\n");
	for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
	{
	printf("%d",curr1->data);
	}
	printf("\n");
	printf("Delete at begining\n");
	head=head->rptr;
	head->lptr=NULL;
	for(curr=head;curr!=NULL;curr=curr->rptr)
	{
	printf("%d",curr->data);
	}
	printf("\n");
	for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
	{
	printf("%d",curr1->data);
	}
	printf("\n");
	printf("Delete at ending\n");
	end=end->lptr;
	end->rptr=NULL;
	for(curr=head;curr!=NULL;curr=curr->rptr)
	{
	printf("%d",curr->data);
	}
	printf("\n");
	for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
	{
	printf("%d",curr1->data);
	}
	printf("\n");
	printf("\nEnter the element insert after number 2::");
	new=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&new->data);
	for(curr=head;curr!=NULL;curr=curr->rptr)
	{
		if(curr->data==2)
		{
			new->rptr=curr->rptr;
			curr->rptr->lptr=new;
			curr->rptr=new;
			new->lptr=curr;
		}
	}	
	for(curr=head;(curr!=NULL);curr=curr->rptr)
	{
	printf("%d",curr->data);
	}
	printf("\n");
	for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
	{
	printf("%d",curr1->data);
	}
	printf("\n");
	int num;
	printf("\ndelete the particular element::");scanf("%d",&num);
	for(curr=head;curr!=NULL;prev=curr,curr=curr->rptr)
	{
		if(curr->data==num)
		{
			curr=curr->rptr;
			curr->lptr=prev;
			prev->rptr=curr;
		}
	}	
	for(curr=head;(curr!=NULL);curr=curr->rptr)
	{
	printf("%d",curr->data);
	}
	printf("\n");
	for(curr1=end;curr1!=NULL;curr1=curr1->lptr)
	{
	printf("%d",curr1->data);
	}
	printf("\n");
}

