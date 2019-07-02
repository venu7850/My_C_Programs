#include<stdio.h>
main()
{
	int n,arr[10],i,j,temp;
	printf("enter how many elements do you want::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the data::");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<=arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
