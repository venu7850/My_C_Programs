#include<stdio.h>
int gcd(int,int);
main()
{
	int n,i,x,y;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
	printf("enter the data:");
	scanf("%d",&arr[i]);
	}
	x=arr[1];
	for(i=2;i<=n;i++)
	{
		y=gcd(x,arr[i]);
		x=y;
	}
	printf("%d",y);
}
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
