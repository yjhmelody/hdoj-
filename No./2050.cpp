#include<stdio.h>
int main()
{
    int n;
    long long int m,a,b,i;
    while(~scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%lld",&m);
            a=m*(2*m+1)+1;//如果不是折线时候的最大值   n*(n+1)/2+1 
            b=a-2*m;//因为是折线，所以每条-2 
            printf("%lld\n",b);
        }
    }
    return 0;
}
