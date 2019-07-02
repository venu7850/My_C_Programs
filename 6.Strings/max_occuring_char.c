#include<stdio.h>
#include<string.h>
#define max 256
int main()
{
	char str[100],ch;
	int count[max]={0};
	scanf("%s",str);
	int i=0,len=0,s=0;
	while(str[i])
	{
		len++;
		i++;
	}
	for(i=0;i<len;i++)
	{
		count[str[i]]++;
		if(s<count[str[i]])
		{
			s=count[str[i]];
			ch=str[i];
		}
	}
	printf("%c,%d",ch,s);
}
	

