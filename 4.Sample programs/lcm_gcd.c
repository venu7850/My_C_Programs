#include<Stdio.h>
main()
{
	int x,y,i;
	printf("Enter the first number::");
	scanf("%d",&x);
	printf("Enter the second number::");
	scanf("%d",&y);
	for(i=x;i>0;i--)
	{
		if(x%i==0&&y%i==0)
		{
		printf("The gcd is%d\n",i);
		break;
		}
	}
}
