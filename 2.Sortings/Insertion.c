#include<stdio.h>
main()
{
	int arr[10],i,j,min,n,temp,key;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{              
		printf("arr:");
		scanf("%d",&arr[i]);
	}
	for(j=2;j<=n;j++)
	{
		key=arr[j];
		i=j-1;
		while(i>0&&arr[i]>key)
		{
			 arr[i+1]=arr[i];
			 i--;
		}
		arr[i+1]=key;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",arr[i]);
	}
}

