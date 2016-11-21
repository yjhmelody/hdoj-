#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>k;
		j=pow(2,k)-1;
		for(i=pow(2,k-1);i<=j;i++)
		{
			k=i;
			while(k)
			{
				if(k%2==1)
				count++;
				k/=2;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
