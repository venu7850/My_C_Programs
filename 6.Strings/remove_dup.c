#include<stdio.h>
#include<string.h>
#define max 256
int main()
{
	int hash[max]={0};
	char str[10]="geekkss";
	char temp;
	int i=0,j=0;
	while(str[i])
	{
		temp=str[i];
		if(hash[temp]==0)
		{
			hash[temp]=1;
			str[j]=str[i];
			j++;
		}
		i++;
	}str[j]='\0';printf("%s",str);
}
	

