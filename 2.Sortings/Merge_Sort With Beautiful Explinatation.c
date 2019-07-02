#include<stdio.h>
void merge_sort(int arr[],int p,int r);
void merge(int arr[],int p,int q,int r);
int len;
main()
{
	int x,arr[10],i;
	printf("Enter the lentgh of the array:");
	scanf("%d",&len);
	for(i=1;i<=len;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}	
	merge_sort(arr,1,len);
	for(i=1;i<=len;i++)
	{
		printf("%d",arr[i]);
	}
}
void merge_sort(int arr[],int p,int r)
{
	
	int q;
	if(p<r)
	{
		q=(((p+r)/2));
		merge_sort(arr,p,q);
		merge_sort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}
void merge(int arr[],int p,int q,int r)
{
	
	int n1,n2,i,j,k;
	n1=q-p+1;
	n2=r-q;
	int left[n1+1],right[n2+1];//Creating 2 arrays with lentgh of each array+1
	for(i=1;i<=n1;i++)
	{
		left[i]=arr[p+i-1];	
	}
	left[n1+1]=123456;     //initializing the last index value with infinity
	for(j=1;j<=n2;j++)
	{
		right[j]=arr[q+j];
	}
	right[n2+1]=123456;     //initializing the last index value with infinity
	i=1,j=1;
	for(k=p;k<=r;k++)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
			arr[k]=right[j];
			j++;
		}
	}
}//Before going to trace or run this program just now about merging and recursion tree on merge sort Because merging is the heart of merge sort.
