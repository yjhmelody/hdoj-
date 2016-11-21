#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    int oldNum = 0,newNum = 0;
    int sum = 0,diff = 0;
    const int upTime = 6, downTime = 4,stopTime = 5;
    while(~scanf("%d",&n) && n)
    {
        sum = 0;
        oldNum = 0; //ÖØÖÃ
        while(n--)
        {
            sum += stopTime;
            scanf("%d",&newNum);
            diff = newNum - oldNum;
            if(diff > 0)
            {
                sum += diff * upTime;
            }
            else
            {
                sum += diff * (-downTime);
            }
            oldNum = newNum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
