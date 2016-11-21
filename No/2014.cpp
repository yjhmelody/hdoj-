#include<stdio.h>
int main()
{
    int n,i;
    double max,min,m,sum;
    while(~scanf("%d",&n))
    {
         scanf("%lf",&m);
         max=min=sum=m;
        for(i=1;i<n;i++)
        {
            scanf("%lf",&m);
            if(max<m)
            max=m;
            if(min>m)
            min=m;
            sum+=m;
        }
        printf("%.2f\n",(sum-min-max)/(n-2));
    }
    return 0;
}
