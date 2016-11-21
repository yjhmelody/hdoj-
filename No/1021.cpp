#include<iostream>
#include<cstdio>
using namespace std;

/**
    数论问题
    找规律
    直接看余数
    n%3 == 0,1,2
    三个组合只有9种情况
    抽屉原理:
    前10种情况一定有重复，周期小于等于9
    (1 2) !0 2 2 1 !0 1 (1 2)
    */
int main()
{
    int n;
    while(cin>>n)
    {
        if(n % 8 == 2 || n % 8 == 6)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
