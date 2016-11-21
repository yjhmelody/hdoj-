#include<iostream>
#include<cstdio>
using namespace std;

int Euclidean(int big,int small)
{
    int temp;
    while(small)
    {
        temp = big % small;
        big = small;
        small = temp;
    }
    return big;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a,b;
        cin>>a;
        while(--n)
        {
            cin>>b;
            a = a * b / (long long int )Euclidean((int)a,(int)b);
        }
        cout<<a<<endl;
    }
    return 0;
}
