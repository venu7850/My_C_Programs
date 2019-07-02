#include<stdio.h>
main()
{
	int arr[10],n,i,j,temp,min;
	printf("enter how many elements::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the data::");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
