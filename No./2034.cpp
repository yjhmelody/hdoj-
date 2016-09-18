#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int cmp(const void *a,const void *b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m)&&(n||m))
	{
		int i,j,k,count,a[105],b[105];
		count=n;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<m;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				a[i]=999999999;
				count--;
				break;
			}
		}
		if(count)
		{
			qsort(a,n,sizeof(a[0]),cmp);
			for(i=0;i<n;i++)
			{
				if(a[i]==999999999)
					continue;
				printf("%d ",a[i]);
			}
		}
		else
			printf("NULL");
		printf("\n");
	}
	return 0;
}
