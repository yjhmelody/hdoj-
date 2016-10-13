#include<iostream>
#include<algorithm>
using namespace std;
/**
 贪心算法
 选择每次最早结束的
*/
struct Time{
	int start;
	int end;
}time[101];

int cmp(struct Time a,struct Time b)
{
	return a.end<b.end;
}
int main()
{
	int n;
	while(cin>>n&&n)
	{
		int count=1,t,i;
		for(i=0;i<n;i++)
			cin>>time[i].start>>time[i].end;
		sort(time,time+n,cmp);//最早结束的在第一个
		t=time[0].end;
		for(i=1;i<n;i++)
		{
			if(t<=time[i].start)
			{
				count++;
				t=time[i].end;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
