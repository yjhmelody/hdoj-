#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,m=1;
    int n,i;
    while(~scanf("%ld%ld",&a,&b))
    {
        if(a==0&&b==0) return 0;
        m=1;
        for(i=0;i<b;i++)
        {
            m=m*a%1000;
        }
        printf("%ld\n",m);

    }
}
