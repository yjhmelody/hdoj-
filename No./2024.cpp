#include<stdio.h>
#include<string.h>
int main()
{
	int n,g;
	while(~scanf("%d",&n)&&n)
	{
		char s[81];getchar();
		int flag=0,i,j,k;
		for(g=0;g<n;g++)
		{	
		flag=0;
		gets(s);
		k=strlen(s);
		if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_')
			flag=1;
		else 
		{
			flag=0;
			printf("no\n");
			continue;
		}
		for(i=1;i<k;i++)
		{
			if((s[i]>='0'&&s[i]<='9')||s[i]=='_'||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
				flag=1;
			else
			{
				printf("no\n");
				flag=0;
				break;
			}
		}
		if(flag)
			printf("yes\n");
		}
	}
	return 0;
}
