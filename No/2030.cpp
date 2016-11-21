#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,g;
	scanf("%d",&n);
	getchar(); 
	for(g=0;g<n;g++)
	{
		
		char s[10000];
		gets(s);
		k=strlen(s);
		j=0;
		for(i=0;i<k;i++)
		{
			if(s[i]<0)
				j++;
		}
		printf("%d\n",j/2);
	}
	return 0;
}
