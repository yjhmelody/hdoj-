#include<iostream>
using namespace std;
/**
    ²¢²é¼¯

*/
int find(int x,int *arr)
{
    int parent = x;
    while(arr[parent] != parent)
        parent = arr[parent];
    return parent;
}

void merge(int x,int y,int *arr)
{
    int finalX,finalY;
    finalX = find(x,arr);
    finalY = find(y,arr);
    if(finalX != finalY)
        arr[finalX] = finalY;
}

int main()
{
    int N,M;
    while(cin>>N>>M)
    {
        int x,y;
        if(N == 0)
            return 0;
        int *arr = new int[N+1];
        for(int i = 0;i <= N;i++)
            arr[i] = i;
        for(int i = 0;i < M;i++)
        {
            cin>>x>>y;
            merge(x,y,arr);
        }
        int count = -1;
        for(int i = 1;i <= N;i++)
            if(arr[i] == i)
                count++;
        cout<<count<<endl;
        delete arr;
    }
    return 0;
}
