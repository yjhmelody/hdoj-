#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,j,k,a,b,c,d,sum1,sum2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum1=sum2=0;
		cin>>a>>b;
		for(j=1;j<=a/2;j++)
		{
			if(a%j==0)
				sum1+=j;
		}
		if(sum1!=b)
		{
			cout<<"NO"<<endl;
			continue; 
		}
		for(j=1;j<=b/2;j++)
		{
			if(b%j==0)
				sum2+=j;
		}
		if(sum2!=a)
		{
			cout<<"NO"<<endl;
			continue; 
		}
		cout<<"YES"<<endl;
	}
	return 0;
}
