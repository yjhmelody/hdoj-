#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m))
	{
		int a[80][80],i,j,k;
	
		for(i=0;i<=m+1;i++)
		{
			for(j=0;j<=n+1;j++)
			{
			if(i==0&&j==0 || i==m+1&&j==0 || i==0&&j==n+1 || i==m+1&&j==n+1)
			printf("+");
			else if(i==0||i==m+1)//µÚÒ»ÐÐ
			printf("-");
			else if(j==0||j==n+1)
			printf("|");
			else printf(" "); 
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
} 
