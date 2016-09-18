
#include<stdio.h>
int main()
{
    int n,m,sum,j;
    while(~scanf("%d",&n))
    {
        sum=1;j=0;
        for(;j<n;j++)
        {
            scanf("%d",&m);
            if(m%2==1)
            sum*=m;
        }
        printf("%d\n",sum);
    }
    return 0;
}

