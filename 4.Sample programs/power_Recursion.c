#include<stdio.h>
int power(int n,int p);
main()
{
	int n1,p1,result=0;
	printf("Enter the number::");
	scanf("%d",&n1);
	printf("Enter the power:");
	scanf("%d",&p1);
	result=power(n1,p1);
	printf("the %d to the power of %d is %d",n1,p1,result);
}
int power(int n,int p)
{
	if(p==0)return 1;
	else return(n*power(n,p-1));
}

