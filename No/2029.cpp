#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
		int i,j,k1,flag=0,k2;
		char s[100];
		for(i=0;i<n;i++)
		{
			scanf("%s",s);
			k1=strlen(s);
			k2=k1-1;
			flag=0;
			for(j=0;j<k1/2;j++)
			{
				if(s[j]!=s[k2-j])
				{
					flag=1;
					break;
				}
			}
			if(flag)
				printf("no\n");
			else
				printf("yes\n");
		}
	}
	return 0;
}
