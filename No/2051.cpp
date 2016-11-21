#include<stdio.h>
int main()
{
	int n,r;
	while(~scanf("%d",&n))
	{
		int i,j,k,t,a[100];
		t=0;
		if(n<0)
		{
			t=1;
			n=-n;
		}
		i=0;
		while(1)
		{
			a[i++]=n%2;//关键部分。。。 
			n=n/2;	//先存入的是末尾的数 
			if(!n)
				break;
		}
		if(t)
			printf("-");
		for(j=i-1;j>=0;j--)
			printf("%d",a[j]);	
		printf("\n");
	}
	return 0;
}
