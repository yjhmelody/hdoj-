#include<iostream>
using namespace std;
int main()
{
	__int64 a[50]={0,3,8},i,j,k,n;
	for(i=3;i<40;i++)
		a[i]=2*(a[i-1]+a[i-2]);//推出的解 
	while(~scanf("%d",&n)&&n)
		printf("%I64d\n",a[n]);
	return 0;
 } 
