#include<stdio.h>
int prime(int n,int i);
int count=0;
main()
{
	int a;
	printf("Enter a number::");
	scanf("%d",&a);
	prime(a,2);
	if(count==0)printf("%d is a prime number\n",a);
	else printf("%d is a not a prime\n",a);
}
int prime(int n,int i)
{
	if (i==n)
		return 0;
	else if(n%i==0)
	{
		count=count+1;
		prime(n,i+1);
	}
	else
		prime(n,i+1);
}
