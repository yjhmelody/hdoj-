#include<iostream>
using namespace std;
long long int C(int n,int m)
{
	if(m<n-m)
		m=n-m;//不知名结论
	long long int ans=1,i;
	for(i=m+1;i<=n;i++)
		ans*=i; 
	for(i=1;i<=n-m;i++)
		ans/=i;
	return ans;
}
int main()
{
	long long int c,n,m,i,a[24]={0,0,1};
	cin>>c;
	while(c--)
	{
		cin>>n>>m;
		for(i=3;i<=m;i++)
		{
			a[i]=(a[i-1]+a[i-2])*(i-1);	
		}
		cout<<a[m]*C(n,m)<<endl;
	}
	return 0;	
} 
