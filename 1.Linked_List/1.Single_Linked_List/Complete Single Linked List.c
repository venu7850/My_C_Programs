#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *ptr;
};
struct node *head=NULL,*curr=NULL,*prev=NULL,*end=NULL,*new=NULL,*pprev=NULL;
int n,i,c;
main()
{
	int n,i,choice;
	printf("1-->Creat The Linked List\n2-->Display The Linked List\n3-->Insert At Begining\n4-->Insert At Ending\n5-->Insert At Before The Element\n6-->Insert At After The element\n7-->Update The Element\n8-->Delete Starting Element\n9-->Deleting Ending Element\n10-->Deleting Particular Element\n11-->Deleting After the element\n12-->Deleting Before The element");
	while(choice!=13)
	{
		printf("\n");
		printf("Enter your choice::");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter how many elements do you want::");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				curr=(struct node *)malloc(sizeof(struct node));
				printf("Enter the element::");
				scanf("%d",&curr->data);
				if(head==NULL)
					head=curr;
				else
					prev->ptr=curr;
				prev=curr;
							
			}		
			end=curr;
			curr->ptr=NULL;
		}
		else if(choice==2)
		{
			for(curr=head;curr!=NULL;curr=curr->ptr) 
				{
				printf("%d\t",curr->data);
				
				}	
		}
		else if(choice==3)
		{
			printf("\nEnter the element insert at begining::");
			new=(struct node*)malloc(sizeof(struct node));
			scanf("%d",&new->data);
			new->ptr=head;
			head=new;
			for(curr=head;curr!=NULL;curr=curr->ptr)
			{
				printf("%d\t",curr->data);
					
			}	
		}
		else if(choice==4)
		{
			printf("\nEnter the element insert at end::");
			new=(struct node*)malloc(sizeof(struct node));
			scanf("%d",&new->data);
			end->ptr=new;
			new->ptr=NULL;
			for(curr=head;curr!=NULL;curr=curr->ptr)
			{
				printf("%d\t",curr->data);
			}
		}
		else if(choice==5)
		{
			printf("Enter the which number before do you want to insert::");
			scanf("%d",&n);
			for(curr=head;curr!=NULL;curr=curr->ptr)
			{
				if(curr->data==n)
					{
						c++;
					}
			}
			if(c==0)printf("Sorry Element not found\n");
			else
			{
				printf("Enter the new element insert before %d::",n);
				new=(struct node*)malloc(sizeof(struct node));
				scanf("%d",&new->data);
				for(curr=head;curr!=NULL;prev=curr,curr=curr->ptr)
				{
					if(curr->data==n)
					{
						new->ptr=curr;
						prev->ptr=new;
					}
				}
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					printf("%d\t",curr->data);
				}			
			}
		}
		else if(choice==6)
		{
			printf("Enter the which number after you want to insert::");
			scanf("%d",&n);
			for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					if(curr->data==n)
						{
							c++;
						}
				}
			if(c==0)printf("Sorry Element not found\n");
			else
			{
				printf("Enter the new element insert after %d::",n);
				new=(struct node*)malloc(sizeof(struct node));
				scanf("%d",&new->data);
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					if(curr->data==n)
					{
						new->ptr=curr->ptr;
						curr->ptr=new;
					}	
				}
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
						printf("%d\t",curr->data);
				}			
			}
		}	
		else if(choice==7)
		{
			printf("in list which number you want to update::");
			scanf("%d",&n);
			for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					if(curr->data==n)
						{
							c++;
						}
				}
			if(c==0)printf("Sorry Element not found\n");
			else
			{
				printf("Enter the new element in place of %d u want update::",n);
				new=(struct node*)malloc(sizeof(struct node));
				scanf("%d",&new->data);
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					if(curr->data==n)
					{
					curr->data=new->data;
					}	
				}
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
						printf("%d\t",curr->data);
				}			
			}
		}	
		else if(choice==8)
		{
			head=head->ptr;
			for(curr=head;curr!=NULL;curr=curr->ptr)
			{
				printf("%d",curr->data);
			}
		}
		else if(choice==9)
		{
			for(curr=head;curr!=NULL;prev=curr,curr=curr->ptr)
			{
				if(curr->data==end->data)
				prev->ptr=NULL;
			}
			for(curr=head;curr!=NULL;curr=curr->ptr)
			{
				printf("%d\t",curr->data);
			}
		}
		else if(choice==10)
		{
			printf("Enter which element want to delete::");
			scanf("%d",&n);
			for(curr=head;curr!=NULL;curr=curr->ptr)
			{
				if(curr->data==n)
				{
				c++;
				}
			}
			if(c==0)printf("sorry element not found\n");
			else
			{
				for(curr=head;curr!=NULL;prev=curr,curr=curr->ptr)
				{
					if(curr->data==n)
					prev->ptr=curr->ptr;
				}
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					printf("%d\t",curr->data);
				}
			}
		}
		else if(choice==11)
		{
			printf("Enter the which number after you want to delete::");
			scanf("%d",&n);
			for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					if(curr->data==n)
						{
							c++;
						}
				}
			if(c==0)printf("Sorry Element not found\n");
			else
			{
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					if(curr->data==n)
					{
						curr->ptr=curr->ptr->ptr;
					}	
				}
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
						printf("%d\t",curr->data);
				}			
			}
		}
		else if(choice==12)
		{
			printf("Enter the which number before you want to delete::");
			scanf("%d",&n);
			for(curr=head;curr!=NULL;curr=curr->ptr)
				{
					if(curr->data==n)
						{
							c++;
						}
				}
			if(c==0)printf("Sorry Element not found\n");
			else
			{
				for(curr=head;curr!=NULL;pprev=prev,prev=curr,curr=curr->ptr)
				{
					if(curr->data==n)
					pprev->ptr=curr;
				}
				for(curr=head;curr!=NULL;curr=curr->ptr)
				{
						printf("%d\t",curr->data);
				}			
			}
		}
		else printf("Sorry you are entered incorrect input\n");
	}
} /*End of the program
	Created by P.V.G.Chowdary@N110750
	By seeing that program dont be affraid in program nothing is there.
	All are simple logics only.....
	I am taking each and every case with neatly...so program contain these many lines*/


