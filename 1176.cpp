#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
/**
    自顶向下分析
    自下向上计算
*/
/*
class Food
{
public:
    int time;
    int x;
};
int cmp( const Food &a, const Food &b ){
    if( a.time < b.time )
       return 1;
    else
       return 0;
}
*/
int sum[11][100005] = {0};
int main()
{
    int n;
    while(~scanf("%d",&n) && n)
    {
        //Food f[10000];
        for(int i = 0;i < 11;i++)
            for(int j = 0;j < 100005;j++)
             sum[i][j] = 0;
        int x,time;
        int maxTime = 0;
        for(int i = 0;i < n;i++)
        {
            //scanf("%d %d",&f[i].x,&f[i].time);
            //sum[f[i].x] [f[i].time]++;
            scanf("%d %d",&x,&time);
            sum[x][time]++;
            maxTime = maxTime < time ? time : maxTime;
        }
        //sort(f,f+n-1,cmp);
        //int maxTime = f[n-1].time;
        //i = maxTime;
        for(int i = maxTime;i > 0;i--)
        {
            sum[0][i-1] += max(sum[0][i],sum[1][i]);
            for(int j = 1;j < 10;j++)
            {
                sum[j][i-1] += max(
                                  max(sum[j-1][i],sum[j][i]),
                                  sum[j+1][i]
                                  );                            //当前位置的上一秒等于这秒相邻三个的最大+自身

            }
            sum[10][i-1] += max(sum[9][i],sum[10][i]);
        }
        cout<<sum[5][0]<<endl;
    }
    return 0;
}
