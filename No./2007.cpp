
#include<stdio.h>
int main()
{
    int x,y,m,n,max,min;
    while(~scanf("%d%d",&m,&n))
    {
        if(m>n){max=m;min=n;}
        else{max=n;min=m;}
        for(x=0,y=0;min<=max;min++)
        {
            if(min%2==0)
            x=x+min*min;
            else
            y=y+min*min*min;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
