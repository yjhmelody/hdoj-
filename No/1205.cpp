#include<iostream>
#include<cstdio>
using namespace std;

//如果最多数量的种类 比其他种类都大2个和2个以上 则不可能成立
// maxNum >= (sum - maxNum) + 2
//注意int 会溢出
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int num = 0,sum = 0;
        long long int maxNum = 0;
        for(int i = 0 ;i < n;i++)
        {
            scanf("%lld",&num);
            maxNum = maxNum > num ? maxNum : num;
            sum += num;
        }
        if(maxNum >= sum - maxNum + 2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
