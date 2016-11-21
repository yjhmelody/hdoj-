#include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
		int a[100],sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",a+i);
			sum+=a[i]/100;
			a[i]=a[i]-a[i]/100*100;
			sum+=a[i]/50;
			a[i]=a[i]-a[i]/50*50;
			sum+=a[i]/10;
			a[i]=a[i]-a[i]/10*10;
			sum+=a[i]/5;
			a[i]=a[i]-a[i]/5*5;
			sum+=a[i]/2;
			a[i]=a[i]-a[i]/2*2;
			sum+=a[i];
		}
		printf("%d\n",sum);
		
	}
	return 0;
}
