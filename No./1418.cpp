#include<stdio.h>
int main()
{
	long long int n,m,i,j,k;
	//n是点个数，m是平面份数,k是曲线段个数 
	while(~scanf("%d%d",&n,&m)&&(n||m))
	{
		k=n+m-2;
		printf("%lld\n",k);
	}
	//因为输入数据最大是32位最大值 
	// 所以输出的最大值 比32位大 
	return 0;
}
