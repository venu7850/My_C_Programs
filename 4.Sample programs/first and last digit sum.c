#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,d;
		scanf("%d",&n);
		d=n%10;
		while(n/10)
		{
			n=n/10;
		}
		d+=n;
		printf("%d\n",d);
	}
}
