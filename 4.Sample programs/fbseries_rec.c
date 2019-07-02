#include<stdio.h>
int fb(int num);
main()
{
	int n,i=0,c,sum=0;
	printf("enter the numer::");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	{
	printf("%d+",fb(i));
	sum=sum+fb(i);
	i++;
	}
	printf("\b=%d",sum);
}
int fb(int num)
{
	if(num==0)return 0;
	else if(num==1)return 1;
	else return(fb(num-1)+fb(num-2));
}
