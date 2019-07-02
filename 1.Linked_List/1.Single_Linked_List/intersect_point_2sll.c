#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int print(struct node *head);
struct node
{
	int data;
	struct node *ptr;
};
struct node *f1=NULL,*f2=NULL,*f3=NULL,*c1=NULL,*c2=NULL,*s1=NULL,*s2=NULL;
int main()
{
	f1=(struct node*)malloc(sizeof(struct node));
	if(f1)
	{
		f1->data=1;
		f1->ptr=NULL;
	}
	f2=(struct node*)malloc(sizeof(struct node));
	if(f2)
	{
		f2->data=2;
		f1->ptr=f2;
		f2->ptr=NULL;
	}
	f3=(struct node*)malloc(sizeof(struct node));
	if(f3)
	{
		f3->data=3;
		f2->ptr=f3;
		f3->ptr=NULL;
	}
	s1=(struct node*)malloc(sizeof(struct node));
	if(s1)
	{
		s1->data=6;
		s1->ptr=NULL;
	}
	s2=(struct node*)malloc(sizeof(struct node));
	if(s2)
	{
		s2->data=7;
		s1->ptr=s2;
		s2->ptr=NULL;
	}
	c1=(struct node*)malloc(sizeof(struct node));
	if(c1)
	{
		c1->data=4;
		f3->ptr=c1;
		s2->ptr=c1;
	}
	c1=(struct node*)malloc(sizeof(struct node));
	if(c2)
	{
		c2->data=5;
		f3->ptr=NULL;
	}
	int l1,l2,data,diff;
	l1=len(f1);
	l2=len(s1);
	diff=(l1>l2)?(l1-l2):(l2-l1);
	data=(l1>l2)?find(diff,f1,s1):find(diff,s1,f1);
	printf("%d",data);
	
}
int len(struct node *h)
{
	int count=0;
	while(h)
	{
		count=count+1;
		h=h->ptr;
	}
	return count;
}
int find(int diff,struct node *p,struct node *q)	
{
	int count;
	for(count=0;count<diff && p!=NULL;count++)
	{
		p=p->ptr;
	}
	while(p!=q)
	{
		p=p->ptr;
		q=q->ptr;
	}
	return q->data;
}
	



