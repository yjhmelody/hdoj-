#include<iostream>
#include<cstdio>
using namespace std;
/**
    快速幂
*/

/**
quickPower的模版

a^b == (a^2)^(b/2)

int power(int a int n)
{
    int ans = 1;
    while(n)
    {
        if(n & 1)
        {
            ans *= a;
        }
        a *= a;
        n >>= 1;
    }
    return ans;
}
*/

int main()
{
    int A ,B,ans = 1;
    while(cin>>A>>B && (A || B))
    {
        A %= 1000;
        while(B)
        {
            if(B & 1)
            {
                ans = ans * A % 1000;
            }
            A = A * A % 1000;
            B >>= 1;
        }
        cout<<ans % 1000<<endl;
        ans = 1;
    }
    return 0;
}
