#include<stdio.h>
int main()
{
    int y,m,d,sum=0;
    while(~scanf("%d/%d/%d",&y,&m,&d))
    {
            switch(m)
            {
                case 12:sum+=30;
                case 11:sum+=31;
                case 10:sum+=30;
                case 9:sum+=31;
                case 8:sum+=31;
                case 7:sum+=30;
                case 6:sum+=31;
                case 5:sum+=30;
                case 4:sum+=31;
                case 3:sum+=28;
                case 2:sum+=31;
                case 1:sum+=d;
            }
         if(m>2&&y%4==0&&y%100!=0||y%400==0&&m>2)
        sum++;
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}


#include<cstdio>
int main()
{
    int year,mon,day,count=0;
    while(scanf("%d/%d/%d",&year,&mon,&day)!=EOF)
    {
        switch (mon)//累加的，不要加break
        {
        case 12:count+=30;
        case 11:count+=31;
        case 10:count+=30;
        case 9:count+=31;
        case 8:count+=31;
        case 7:count+=30;
        case 6:count+=31;
        case 5:count+=30;
        case 4:count+=31;
        case 3:count+=28;
        case 2:count+=31;
        case 1:;
        count+=day;
        if(mon>2&&year%4==0&&year%100!=0||year%400==0)
           //口诀：四年一闰，百年不闰，四百年再闰~~~~~~~
        count++;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}




