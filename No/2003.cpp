#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    while(~scanf("%lf",&x))
    {
    y=fabs(x);
    printf("%.2f\n",y);
    }
    return 0;
}
