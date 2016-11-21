#include<iostream>
#include<cstring>
using namespace std;

/**
    01背包问题
    动态规划
    状态转移方程
    f[i][v]=max{f[i-1][v],f[i-1][v-capcity[i]]+value[i]};

    01背包是从容量大的时候计算，
    f[i]只需要知道f[i-1]的情况
*/

int main()
{
    int T;
    cin>>T;
    int N,V;
    int capacity[1005];
    int value[1005];
    int sum[1005];  //数组下标大于容量

    while(T--)
    {
        cin>>N>>V;
        memset(sum,0,sizeof(sum));
        for(int i = 0;i < N;i++)
        {
            cin>>value[i];
        }
        for(int i = 0;i < N;i++)
        {
            cin>>capacity[i];
        }
        for(int i = 0;i < N;i++)    ///N个物品
            for(int j = V;j >= capacity[i];j--)
                sum[j] = max(sum[j],sum[ j - capacity[i] ]+ value[i]);
        cout<<sum[V]<<endl;
    }
    return 0;
}
