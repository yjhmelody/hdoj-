#include<iostream>
using namespace std;
int main()
{
	long long int n,i,j,k,a,b,s[100]={0,1,2,3};
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		for(i=4;i<=b-a;i++)
		{
			s[i]=s[i-3]+s[i-2]*2;
		}
		cout<<s[b-a]<<endl;
	}
	return 0;
}
