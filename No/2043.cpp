#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,flag1,flag2,flag3,flag4;
    char s[80],*p;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%s",s);
        p=s;j=0;
        flag1=0;flag2=0;flag3=0;flag4=0;
        k=strlen(s);
        if(k<8||k>16)
        {
            printf("NO\n");
            continue;
        }
        while(flag1+flag2+flag3+flag4<3)
        {
            if(*(p+j)=='\0') break;
            if(*(p+j)>='A'&&*(p+j)<='Z')
            flag1=1;
            else if(*(p+j)>='a'&&*(p+j)<='z')
            flag2=1;
            else if(*(p+j)>=35&&*(p+j)<=37||*(p+j)==64||*(p+j)==67
            ||*(p+j)==126||*(p+j)==33)
            flag3=1;
            else if(*(p+j)>='0'&&*(p+j)<='9')
            flag4=1;
            j++;
        }
        if(flag1+flag2+flag3+flag4>=3)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}
