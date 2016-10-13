#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int cmp(int &n1, int &n2)
{
    return n1 > n2;
}
int main()
{
    int n;
    const int score = 200;
    while(cin>>n && n)
    {
        int  *h1 = new int[n];  //田忌
        int  *h2 = new int[n];
        int myScore = 0;
        for(int i = 0;i < n;i++)
        {
            cin>>h1[i];
        }
        for(int i = 0;i < n;i++)
        {
            cin>>h2[i];
        }
        sort(h1,h1+n,cmp);
        sort(h2,h2+n,cmp);
        /*
        for(int i = 0;i < n;i++)
        {
            cout<<h1[i]<<endl;
        }
        for(int i = 0;i < n;i++)
        {
            cout<<h2[i]<<endl;
        }
        */
        int cur1 = 0,cur2 = 0;  //左边的下标
        int n1 = n-1,n2 = n-1;      //右边的下标
        int win = 0,lose = 0,draw = 0;

        /**
            大的开始比
            能赢就比当前这个
            会输就用最小的拿来比最大的
            平局就看最小的一组
            最小的一组如果不能赢就让最小的输给最大的
        */
        while(cur1 <= n1 && cur2 <= n2)
        {
            if(h1[cur1] > h2[cur2])
            {
                win++;
                cur1++;
                cur2++;
            }
            else if(h1[cur1] < h2[cur2])
            {
                lose++;
                n1--;
                cur2++;
            }
            else
            {
                if(h1[n1] <= h2[n2])    //最小组不能赢
                {
                    if(h1[n1] < h2[cur2])
                    {
                        lose++;
                        n1--;
                        cur2++;
                    }
                    else
                    {
                        draw++;
                        n1--;
                        cur2++;
                    }
                }
                else
                {
                    n1--;
                    n2--;
                    win++;
                }
            }
        }

        myScore = (win - lose)*score;
        printf("%d\n",myScore);
        delete []h1;
        delete []h2;
    }

    return 0;
}
