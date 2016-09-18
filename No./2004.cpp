#include<stdio.h>
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        if(t>=0&&t<=100)
        switch(t/10)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:printf("E\n");break;
            case 6:printf("D\n");break;
            case 7:printf("C\n");break;
            case 8:printf("B\n");break;
            case 9:
            case 10:printf("A\n");break;
        }
        else printf("Score is error!\n");
    }
    return 0;

}
