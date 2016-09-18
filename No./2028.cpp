#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
		int a[1000],i,j,k,flag=1;
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		k=a[0];
		for(i=1;i<n;i++)//可以整除就检查下个是否看整除 
		if(a[0]%a[i]!=0)//不能整除 放大继续重新检查 
		{
			a[0]+=k;
			i=0;
		}
		printf("%d\n",a[0]);
	}
	return 0;
 } 
