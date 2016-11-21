#include<iostream>
#include<string>
#include<cstdio>

using namespace std;


int main()
{

    int i,j,k,t,n,m,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        x=min(n,m);
        y=max(n,m);
        x=x/2;
        y=y/2;
        printf("%d\n",x+y);
    }

    return 0;
}
