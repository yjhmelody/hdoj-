#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,temp,k,j;
	while(~scanf("%d",&n)&&n)
	{
		int a[100],b[100];
		memset(b,0,sizeof(b));
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
			if(a[i]<0)
			{
				b[i]=1;
				a[i]=-a[i];
			}
		}
		for(i=0;i<n;++i)
		{
			k=i;
			for(j=i+1;j<n;++j)
			{	
				if(a[k]<a[j])
				k=j;
			}
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;
			temp=b[k];
			b[k]=b[i];
			b[i]=temp;
		}
		for(i=0;i<n-1;i++)
		{
			if(b[i])
			printf("-");
			printf("%d ",a[i]);
		}
		if(b[i])
		printf("-");
		printf("%d\n",a[i]);
	}
	return 0;
}
