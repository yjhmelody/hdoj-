#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int is_prime(int n)
{
	if(n<=1) return 0;
	int m=floor(sqrt(n)+0.5);
	for(int i=2;i<=m;i++)
		if(n%i==0) return 0;
	return 1;
}

int main()
{
	int x,y,count=0,i;
	while(~scanf("%d%d",&x,&y)&&!(x==0&&y==0))
	{
		for(i=x;i<=y;i++)
		{
			count=is_prime(i*i+i+41);
			if(!count)
			{
				printf("Sorry\n");
				break;
			}
		}
		if(i-1==y)
			printf("OK\n");
	}
	return 0;
 } 
