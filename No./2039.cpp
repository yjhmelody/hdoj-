#include<iostream>
using namespace std;
bool is_triangle(double a,double b,double c)//判断是否能组成三角形 
{
	if(a + b > c && a + c > b && b + c > a)
	return true;
	return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	double a,b,c;
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(is_triangle(a,b,c))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
