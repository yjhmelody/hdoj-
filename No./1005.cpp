#include<iostream>
#include<cstdio>
using namespace std;
/**
    同1021题
    n%7==0,1,2,3,4,5,6;
    49种组合
    找最多前50个的规律
*/
int main()
{
    int A,B,n;
    while(cin>>A>>B>>n)
    {
        int arr[52] = {0,1,1};
        if(!(A || B || n))
        {
            break;
        }
        int flag = 0;
        int cycle,begin;
        //cout<<arr[1]<<endl;
        //cout<<arr[2]<<endl;
        for(int i = 3;i <= 51;i++)
        {
            arr[i] = (arr[i-1] * A + arr[i-2] * B) % 7;
            //cout<<arr[i]<<endl;
            for(int j = 2;j < i;j++)        //如果能找到俩组数是相同的则找到了周期
            {
                if((arr[j] == arr[i]) && (arr[j-1] == arr[i-1]))  //开始周期变化
                {
                    cycle = i - j;      //记录周期
                    begin = j - 1;      //记录周期开始起点
                    flag = 1;
                    break;              //没有必要再算后面的了
                }
            }
            if(flag)
            {
               break;
            }
        }
        //cout<<endl;
        if(begin > n)
        {
            cout<<arr[n]<<endl;
        }
        else
        {

            cout<<arr[begin+(n-begin)%cycle]<<endl;
        }

    }
    return 0;
}
