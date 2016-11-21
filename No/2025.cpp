#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	while(gets(s))
	{
		int i,j,k,len=strlen(s);
		for(i=0;!(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z');i++);
		if(s[i]>='a'&&s[i]<='z')
		s[i]-=32;
		for(;s[i]!='\0';++i)
		{
			if(s[i]==' '&&s[i+1]>='a'&&s[i+1]<='z')
			s[i+1]-=32;
		}
		puts(s);
	}
	return 0;
}
