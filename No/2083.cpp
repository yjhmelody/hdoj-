#include<stdio.h>
int main()
{
    long long int m;
    int n;
    while(~scanf("%lld",&n))
    {
        while(n--)
        {
            scanf("%lld",&m);
            m=m%100000;
            printf("6%05lld\n",m);
        }
    }
    return 0;
}
