#include<stdio.h>
main()
{
int n,a,b,c,i;
printf("Enter n value:");
scanf("%d",&n);
a=0,b=1;
printf("%d\n",a);
for(i=1;i<n;i++)
	{
	c=a+b;
	a=b;
	b=c;
	printf("%d\n",a);
	}
}
