#include<stdio.h>
int main()
{
	char s[105],a[6]="(max)";
	while(gets(s))
	{
		int i,j,max=0;
		for(i=0;s[i];i++)
		{
			if(s[i]>max)
				max=s[i];
		}
		for(i=0;s[i];i++)
		{
			printf("%c",s[i]);
			if(max==s[i])
			printf("%s",a);
		}
		printf("\n");
	}
	return 0;
}
