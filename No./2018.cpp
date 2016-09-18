#include<stdio.h>
int	fb(int n)
{
	if(n<=1)
	return 1;
	if(n==2)
	return 2;
	if(n>=3)
	return fb(n-1)+fb(n-3);
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		if(n==1)
		printf("1\n");
		else if(n==2)
		printf("2\n");
		else if(n>=3)
		printf("%d\n",fb(n));
		else 
		return 0;
	}
	return 0;
}
