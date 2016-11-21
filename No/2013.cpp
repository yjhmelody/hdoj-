#include<stdio.h>
int main()
{
    int n,m,sum;
    while(~scanf("%d",&n))
    {
        sum=1;
        for(;n>1;n--)
        {
            sum=(sum+1)*2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
