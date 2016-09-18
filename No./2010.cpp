
#include <stdio.h>
int main()
{
    int m,n,i,j,g,s,b;//g个位 s十位数 b百位数
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        j=0;
        for(i=m;i<=n;i++)
        {
            g=i%10;
            s=i%100/10;
            b=i/100;
            if(i==(g*g*g+s*s*s+b*b*b))
            {
                if(j==1)
                printf(" ");
                printf("%d",i);
                j=1;
            }
        }
        if(j==0)
        printf("no\n");
        else
        printf("\n");
    }
    return 0;
}
