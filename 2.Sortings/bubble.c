#include<stdio.h>
main()
{
	int a[10],i=0,j=0,n,temp=0;
	printf("Enter how many elements do you want::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter the data::");
	scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
}
