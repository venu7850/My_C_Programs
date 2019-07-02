#include<stdio.h>
#include<string.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[20];
		int l;
		scanf("%s",s);
		l=strlen(s);
		if(l==1)
			printf("%c",s[0]);
		else
			printf("%d",(s[0]+s[l-1]-96));
	}
}
