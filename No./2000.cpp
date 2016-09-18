#include<stdio.h>
int main()
{
    char x,y,z,c;
    while(~scanf("%c%c%c%c",&x,&y,&z,&c))
    {
    if(x>y&&x>z)
    {
        if(y>z)printf("%c %c %c\n",z,y,x);
        else printf("%c %c %c\n",y,z,x);
    }
    if(y>x&&y>z)
    {
        if(x>z)printf("%c %c %c\n",z,x,y);
        else printf("%c %c %c\n",x,z,y);
    }
     if(z>y&&z>x)
    {
        if(x>y)printf("%c %c %c\n",y,x,z);
        else printf("%c %c %c\n",x,y,z);
    }
    }
    return 0;
}
