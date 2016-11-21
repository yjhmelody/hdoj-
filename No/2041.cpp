#include<stdio.h>
int main()
{
    int n,m,i,a[50]={0,1,1,2};
    while(~scanf("%d",&m))
    {
        while(m--)
        {
            scanf("%d",&n);
            for(i=4;i<=n;i++)
            {
                a[i]=a[i-1]+a[i-2];
            }
            printf("%d\n",a[n]);
        }
    }
    return 0;
}
