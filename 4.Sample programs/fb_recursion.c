#include<stdio.h>
int fb(int n);
int i;
main()
{
	int num;
	printf("Enter a number of terms in the series::");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	printf("fibonacci(%d)=%d\n",i,fb(i));
	}
}
int fb(int n)
{
	if(n<=2)return 1;
     return(fb(n-1)+fb(n-2));
}
