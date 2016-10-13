
#include<iostream>

using namespace std;

int main()
{
    int C,n;
    long long int arr[40] = {0,1,3};
    for(int i = 3;i<=31;i++)
        arr[i] = arr[i-1] + arr[i-2]*2;
    cin>>C;
    while(C--)
    {
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
