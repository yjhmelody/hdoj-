#include<iostream>
using namespace std;
int main()
{
	long long int i,j,k,n,a[100]={0,1,2,3};
	for(i=4;i<51;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}
