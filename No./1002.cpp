#include<stdio.h>
#include<string.h>

int main()
{
	char a[1000],b[1000],c[1001];
	int i,j=1,p=0,n,n1,n2;//i是c的下标，case j ，p是进一位，n事例个数，n1n2是字符串长度-1
	scanf("%d",&n);
	while(n)
	{
		scanf("%s %s",a,b);
		printf("Case %d:\n",j);
		printf("%s + %s = ",a,b);
		n1=strlen(a)-1;
		n2=strlen(b)-1;
		for(i=0;n1>=0||n2>=0;i++,n1--,n2--)//i负责c的下标
		{
			if(n1>=0&&n2>=0)
				c[i]=a[n1]+b[n2]-'0'+p;//当俩个大数对应位数都存在时 
			if(n1>=0&&n2<0)
				c[i]=a[n1]+p;//n2对应位已经没有数 
			if(n1<0&&n2>=0)
				c[i]=b[n2]+p;//同理 
			p=0; //不论有没有进位，都把进位清零
			if(c[i]>'9')
			{
				c[i]=c[i]-10;
				p=1;//大于9 进一位	
			}
		}
		if(p==1)//俩数最大位相加进一位 
			printf("%d",p);
		while(i--)//之前存的字符串是反向的 
			printf("%c",c[i]);
		j++;
		if(n!=1)
			printf("\n\n");
		else
			printf("\n");
		n--;//n在最后一个事例输出时为1 然后再变为0 
	} 
	return 0; 
}
