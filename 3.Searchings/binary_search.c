#include<stdio.h>
main()
{
	int arr[10],i,j,low=1,mid,high,key,flag=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{              
		printf("arr:");
		scanf("%d",&arr[i]);
	}
	low=0;
	high=n-1;
	printf("Enter the element to search:");
	scanf("%d",&key);
	while(low<=high)
	{
		mid=low+((high-low)/2);
		if(arr[mid]==key)
		{
			flag=1;
			break;
		}
		else if(arr[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	
	if(flag==1)
		printf("found");
	else
		printf("not found");
	
}


