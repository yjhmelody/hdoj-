#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,min,pp,c,n,i,j,k,x,y[1000]={0},z[1000]={0},count;
    while(~scanf("%d",&n))
    {
        for(i=0;i<n;++i)
        {
            memset(y,0,sizeof(y));
            memset(z,0,sizeof(z));
            count=0;
            do{
                scanf("%d%d%d",&a,&b,&c);
            }while(a==b);
            if(c%2==1)
            {
                printf("Impossible\n");
                continue;
            }
            for(x=c/2;x>=0;x--)
            {
                if(x%a==0 && (c/2-x)%b==0)    //x为分配给a的
                {
                    y[count]=x/a;    //存放a的个数
                    z[count++]=(c/2-x)/b;    //存放b的个数
                }

            }
                pp=0;
                min=y[0]+z[0];
                for(j=1;y[j]!=0||z[j]!=0;j++)
                {
                    if(min>y[j]+z[j])
                    {
                        min=y[j]+z[j];
                        pp=j;
                    }
                }
                if(y[pp]==0&&z[pp]==0)
                    printf("Impossible\n");
                else
                printf("%d %d\n",2*y[pp],2*z[pp]);
        }
    }
    return 0;
}
