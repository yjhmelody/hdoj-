#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,ah,am,as,bh,bm,bs,ch,cm,cs;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cin>>ah>>am>>as>>bh>>bm>>bs;
		cs=bs+as;
		cm=bm+am;
		ch=bh+ah;
		if(cs>=60)
		{
			cs-=60;
			cm++;
		}
		if(cm>=60)
		{
			cm-=60;
			ch++;
		}
		cout<<ch<<" "<<cm<<" "<<cs<<endl;
	}
	return 0;
 } 
