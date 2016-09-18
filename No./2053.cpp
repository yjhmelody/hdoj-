/*
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int i,a=1;
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			a=!a;
		}
		printf("%d\n",a);
	}
	return 0;
}*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a){
        b=sqrt(a);//数学规律 C++支持重载 
        if(b*b==a)
            cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
