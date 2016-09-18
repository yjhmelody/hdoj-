#include<stdio.h>
#include<string.h>
int main()
{
	char s[81];
	int t,i,j,k,count=0;
	while(~scanf("%d",&t))
	{
		for(i=0;i<t;++i)
		{
			scanf("%s",s);
			j=0;
			while(s[j])
			{
				if(s[j]<='9'&&s[j]>='0')
				{
					count++;
				}
				j++; 
			}	
			printf("%d\n",count);
			count=0;
		}	
	}
	return 0;	
}
