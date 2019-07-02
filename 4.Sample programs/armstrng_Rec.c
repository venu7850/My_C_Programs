#include<stdio.h>
int arm(int num);
main()
{
	int n,result;
	printf("Enter the number::");
	scanf("%d",&n);
	result=arm(n);
	if(result==n)printf("%d is armstrong number\n",n);
	else printf("%d is not a arm strong number\n",n);
}
int arm(int num)
{
	static int s=0;
	if(num!=0)
	{
	s=s+((num%10)*(num%10)*(num%10));
	arm(num/10);
	}	
	return s;
}
