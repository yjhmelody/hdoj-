#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	double b[30]={0,0,1};
	for(i=3;i<=20;i++)
		b[i]=( b[i-1]+b[i-2] )*(i-1);//前面n-1个可以有全没抽中，和只抽中一个（以后和第n个抽中的交换） 
	scanf("%d",&n);//b统计的是没抽到的情况 
	while(n--)
	{
		scanf("%d",&i);
		for(j=2;j<=i;j++)
			b[i]/=j;
		printf("%.2lf%%\n",b[i]*100);
	}
	return 0;
}
