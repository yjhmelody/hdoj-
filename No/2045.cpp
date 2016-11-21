#include<iostream>
#include<cmath>
using namespace std;
int C(int n,int m)
{
	if(m<n-m)
		m=n-m;//不知名结论
	int ans=1,i;
	for(i=m+1;i<=n;i++)
		ans*=i; 
	for(i=1;i<=n-m;i++)
		ans/=i;
	return ans;
}
int A(int n,int m)
{
	if(n==0||m==0||n==1)
		return 1;
	for(int i=0;i<m;i++)
	{
		n*=n-1;
	}
	return n;
}
int main()
{
	long long int n,i,j,k,a[55]={0,3,6,6};
	for(i=4;i<=50;i++)
	{
		a[i]=a[i-1]+a[i-2]*2;//a[i-1]时 第i个只有1种情况  a[i-2]时 i-1和i有2种情况 
	}
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}


/*
	int main()
	{
    long long int n,i,j,k,a[55]={0,3,6,6};
    for(i=4;i<=50;i++)
    {
        a[i]=3*pow(2,i-1)-a[i-1];
    }
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
*/
