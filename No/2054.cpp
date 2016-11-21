#include<iostream>
using namespace std;
int main()
{
	double x,y;
	while(cin>>x>>y)
	{
		if(x-y<1e-307&&y-x<1e-307)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
