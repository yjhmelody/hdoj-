#include<stdio.h>
int main()
{
    int m,n,sign=1,i,j;//m为事例个数,n为某事例包含的个数
    double a;
    while(~scanf("%d\n",&m))
    {
        for(i=0;i<m;i++)
        {
            scanf("%d",&n);
            a=0;
            for(j=1;j<=n;j++)
            {
                a=a+(1.0/j)*sign;
                sign=-1*sign;
            }
            printf("%.2lf\n",a);
            sign=1;
        }
    }
    return 0;
}
