#include<stdio.h>
int main()
{
    char str[101];
    int n,a,e,i,o,u,j;
   while(~scanf("%d",&n))
   {
    while(n--)
    {
        a=0;e=0;i=0;o=0;u=0;
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]=='a') {a++;continue;}
            if(str[j]=='e') {e++;continue;}
            if(str[j]=='i') {i++;continue;}
            if(str[j]=='o') {o++;continue;}
            if(str[j]=='u') {u++;continue;}
        }

       if(n!=0) printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",a,e,i,o,u);
       else printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
    }
   }
    return 0;
}
