#include<stdio.h>
int main()
{
    int n,m,aver,i,a,b,c,xu,sum;
    while(~scanf("%d%d",&n,&m))
    {
        a=n%m;b=n/m;
        for(xu=2,c=1;c<=b;c++)//zushu
        {
            sum=0;
            for(i=1;i<=m;i++)//m zhong de  shu
            {
                sum+=xu;
                xu+=2;
            }
            aver=sum/m;
            if(a==0&&c==b)
            {
                printf("%d\n",aver);
            }
            else printf("%d ",aver);
        }
        if(a!=0)
        {

        for(c=1,sum=0;c<=a;c++)
        {
            sum+=xu;
            xu+=2;
        }
        aver=sum/a;
            printf("%d\n",aver);
        }
    }
    return 0;
}
