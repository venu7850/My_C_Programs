#include<stdio.h>
main()
{
	int i,j,n,max;
	printf("Enter Range : :");
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++)
	{
		printf("%d.element::",i);
		scanf("%d",&a[i]);
	}
	max=a[1];
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
		if(max<a[i])
			max=a[i];
	}
	printf("\n");
	int temp[max],b[n];
	for(i=0;i<=max;i++)
		temp[i]=0;
	for(i=1;i<=n;i++)
		temp[a[i]]=temp[a[i]]+1;
	for(j=1;j<=max;j++)
		temp[j]=temp[j]+temp[j-1];
	for(i=n;i>=1;i--)
	{
		b[temp[a[i]]]=a[i];
		temp[a[i]]-=1;
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("%d",b[i]);
	}
	
}
