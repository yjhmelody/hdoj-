#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,a,s[40]={3};
	cin>>n;
	while(n--)
	{
		cin>>a;
		for(i=1;i<=a;i++)
			s[i]=(s[i-1]-1)*2;
		cout<<s[a]<<endl;
	}
	return 0;
}
