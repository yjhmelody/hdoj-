#include<stdio.h>
#include<stdlib.h>
#define M 105
#define N 105
int main()
{
	int m,n,i,j,k,a[M][N],b[M][N],max,pi,pj;
	while(~scanf("%d%d",&m,&n))
	{
	
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[i][j]);//输入选手分数
		if(a[i][j]<0)
		{
			b[i][j]=-1;
			a[i][j]=-a[i][j];
		}
		else
			b[i][j]=1;
	}
	max=a[1][1];
	pi=1,pj=1; 
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(max<a[i][j])
			{
				pi=i;pj=j;
				max=a[i][j];
			}
		}
	}
	printf("%d %d %d\n",pi,pj,a[pi][pj]*b[pi][pj]); 
	}return 0;
 } 
