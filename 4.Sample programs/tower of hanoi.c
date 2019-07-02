#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	printf("Enter the number of rings:");
	scanf("%d",&n);
	move(n,'A','C','B');
}
void move(int n,char source,char dest,char spare)
{
	if(n==1)printf("\n move from %c to %c",source,dest);
	else
	{
	move(n-1,source,spare,dest);
	move(1,source,spare,dest);
	move(n-1,source,spare,dest);
	}
}
