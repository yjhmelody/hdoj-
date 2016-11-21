#include<iostream>
#include<cstring>
using namespace std;

/**
    完全背包问题
    动态规划
    状态转移方程
    f[i][v]=max{f[i-1][v],f[i-1][v-capcity[i]]+value[i]};

    从前往后算，因为后面情况可以有多个同一个物品
*/

int main()
{
    int C;
    cin>>C;
    while(C--)
    {
        int n,m;
        cin>>n>>m;                  ///n是经费
        int p[505],h[505],c[505];   ///p是价格 h是重量
        memset(c,0,sizeof(c));
        int tempp,temph,tempc;
        int count = 0;
        for(int i = 1; i <= m;i++)
        {
            cin >>tempp>>temph>>tempc;
            int t = 1;
            while(tempc >= t)
            {
                p[count] = tempp * t;
                h[count] = temph * t;
                count++;
                tempc -= t;
                t <<= 1;
            }
            if(tempc > 0)   //如果还有剩余，再分一组
            {
                p[count] = tempp * tempc;
                h[count] = temph * tempc;
                count++;
            }
        }
        for(int i = 0;i < count;i++)    ///count正好是拆分后的个数
            for(int j = n;j >= p[i];j--)
                c[j] = max( c[j], c[ j-p[i] ] + h[i] ); ///输入数据下标是0开始  输出数据是从1开始
        cout<<c[n]<<endl;
    }

    return 0;
}
