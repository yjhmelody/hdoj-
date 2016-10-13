#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

class Rice
{
public:
    int price;
    int weight;
};

int cmp(Rice &rice1, Rice &rice2)
{
    return rice1.price < rice2.price;
}
int main()
{
    int C;
    int n,m;
    cin>>C;
    while(C--)
    {
        cin>>n>>m;
        double sumWeight = 0;
        int *price = new int[m];
        int *weight = new int[m];
        Rice *rice = new Rice[m];
        for (int i = 0;i < m;i++)
        {
            cin>>rice[i].price>>rice[i].weight;
        }
        sort(rice,rice+m,cmp);
        for (int i = 0;i < m && n;i++)
        {
            int temp = rice[i].price * rice[i].weight;
            if(n >= rice[i].price * rice[i].weight)
            {
                n -= temp;
                sumWeight += rice[i].weight;
            }
            else
            {
                sumWeight += n / 1.0 / rice[i].price;
                n = 0;
            }
        }
        printf("%.2lf\n",sumWeight);
    }
    return 0;
}
