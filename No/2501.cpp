#include<iostream>
using namespace std;
int main()
{
	int t,i,j,k,n,a[35]={0,1,3};
	cin>>t;
	for(i=3;i<=30;i++)
	{
		a[i]=a[i-2]*2+a[i-1];//µÝÍÆÇó½â 
	}
	while(t--)
	{
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}
