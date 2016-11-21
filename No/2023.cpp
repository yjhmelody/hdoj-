#include<stdio.h>
int main()
{
	int n,m,i,j,flag;
	
	while(~scanf("%d%d",&n,&m))
	{
		double a[60][60]={0},sum;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		scanf("%lf",&a[i][j]);
		for(i=0;i<n-1;i++)
		{
			sum=0;
			for(j=0;j<m;j++)
			sum+=a[i][j];
			a[i][j]=sum/m;//存一个学生的平均成绩 
			printf("%.2f ",a[i][j]);
		}
		sum=0;
		for(j=0;j<m;j++)//最后一个学生 
		sum+=a[i][j];
		a[i][m]=sum/m;
		printf("%.2f\n",a[i][j]);
		for(i=0;i<m-1;i++)
		{
			sum=0;
			for(j=0;j<n;j++)
			sum+=a[j][i];
			a[n][i]=sum/n;
			printf("%.2f ",a[j][i]);
		}
		sum=0;
		for(j=0;j<n;j++)//最后一门平均成绩 
		sum+=a[j][i];
		a[n][i]=sum/m;
		printf("%.2f\n",a[j][i]);
		flag=0;
		for(i=0;i<n;i++)
		{
			flag++;
			for(j=0;j<m;j++)
			{
				if(a[i][j]<a[n][j])//n是存放科目平均成绩的地方 
				{
					flag--;
					break;
				}
			}
		}
		printf("%d\n\n",flag);
	}
	return 0;	
} 
