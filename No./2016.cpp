#include<stdio.h>
int main()
{
    int i,j,k,n,a[101],min,temp;
        while(~scanf("%d",&n))
        {
            if(n==0)
            break;
            for(i=0;i<n;++i)
                scanf("%d",&a[i]);
            k=a[0];
            min=0;
            for(i=1;i<n;++i)
                if(k>=a[i])
                {
                    k=a[i];
                    min=i;
                }
            temp=a[0];
            a[0]=a[min];
            a[min]=temp;
            for(i=0;i<n-1;i++)
                printf("%d ",a[i]);
            printf("%d\n",a[i]);
        }
    return 0;
}
