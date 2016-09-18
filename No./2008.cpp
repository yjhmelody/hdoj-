
#include<stdio.h>
int main()
{
    int n,d,count1,count2,count3;
    double x;
    while(~scanf("%d",&n))
    {
        if(n==0) break;
        for(d=1,count1=0,count2=0,count3=0;d<=n;d++)
        {
            scanf("%lf",&x);
            if(x<0)
            count1++;
            else if(x>0)
            count3++;
            else count2++;
        }
        printf("%d %d %d\n",count1,count2,count3);
    }
    return 0;
}
