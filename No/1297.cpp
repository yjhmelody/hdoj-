#include<iostream>

using namespace std;
/**
    递推求解
    f(n) = f(n-1)+f(n-2)+f(n-4)
    考虑最后一个为男的情况:
        f(n-1)
    考虑最后一个为女的情况:
        考虑倒数第二个为女的情况:
            前面n-2个合法即可 f(n-2)   //有遗漏，没有考虑倒数第三个为女的不合法情况
        考虑到前n-2个人的不合法的情况因为最后俩个为女而变为合法
        这种情况是倒数第三个为女，倒数第四个为男的,f(n-4).

    需要用大数

*/

int bigNum()
{

}


int main()
{
    int n;
    long long int arr[1005]={0,1,2,4};
    for(int i = 4;i <= 1000;i++)
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-4];
    }
    while(cin>>n)
    {
        cout<<arr[n]<<endl;
    }
    return 0;
}
