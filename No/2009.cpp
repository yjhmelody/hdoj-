
#include<stdio.h>
#include<math.h>
int main()
{
    int m,i;
    double sum,n;
    while(~scanf("%lf%d",&n,&m))
    {
        sum=0;
        for(i=1;i<=m;i++)
        {
            sum+=n;
            n=sqrt(n);
        }
        printf("%.2f\n",sum);
    }
    return 0;
}
