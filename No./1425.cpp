#include<iostream>
#include<algorithm>
using namespace std;
int  mergesort(int*,int ,int);
void merge(int*,int,int,int);
int mergesort(int a[],int p,int r)//p,r是上下界 
{ 
	if(p>=r)
	return 0;
	int i,j,k,q;//q是归并排序的中间坐标
	q=(p+r)/2;
	mergesort(a,p,q);
	mergesort(a,q+1,r);//递归
	merge(a,p,q,r);//这里调用真正的操作
	return 1;//成功 
}
void merge(int a[],int p,int q,int r)//真正的递归操作
{									//q是归并排序的中间坐标
	int n1=q-p+1,n2=r-q;//俩子数组的元素个数 
	int b[10005],c[10005],i,j,k;
	for(i=0;i<n1;++i)
		b[i]=a[p+i];//依次把a左半数组拷贝到b数组中 
	b[i]=2147483647;
	
	for(i=0;i<n2;++i)
		c[i]=a[q+1+i];//同理
	c[i]=2147483647; 
	i=j=0;	//字数组的初始化下标索引
	for(k=p;k<=r;k++)
	{
		if(b[i]<=c[j])
		{
			a[k]=b[i++];//边比较边排序，俩数组已有序
			
		} 
		else
		{
			a[k]=c[j++];//分治思想已经把数组分为1个元素，所以归并时候有序
		
		}
	}
} 
int cmp(const void*a,const void*b)
{
	return *(int*)a - *(int*)b;
}

void shellsort(int a[],int p,int r)
{
	int i,j,k,h=1,len=r-p+1,temp;
	while(h<len/3)
		h=h*3+1;
	while(h>=1)
	{
		for(i=h;i<len;++i)
		{
			temp=a[i+p];
			for(j=i+p;j>=h && a[j-h]>temp;j-=h)
				a[j]=a[j-h];
			a[j]=temp;
		}
		h=(h-1)/3;
	}
}



void heapAdjust(int array[],int i,int length)
{
    int child;
    int temp;
    for(;2*i+1<length;i=child)
    {
        //子结点的位置=2*（父结点位置）+1
        child=2*i+1;
        //得到子结点中较大的结点
        if(child<length-1&&array[child+1]>array[child])
		//判断是否存在俩子节点 如果存在&&右大于左就选择右 
			++child;
        //如果较大的子结点大于父结点那么把较大的子结点往上移动，替换它的父结点
        if(array[i]<array[child])
        {
            temp=array[i];
            array[i]=array[child];
            array[child]=temp; 
        }
        else break; //否则退出循环
    }
}
//堆排序算法
void heapsort(int array[],int length)
{
    int i;
    //调整序列的前半部分元素，调整完之后第一个元素是序列的最大的元素
    //length/2-1是最后一个非叶节点，此处"/"为整除
    for(i=length/2-1;i>=0;--i)
    heapAdjust(array,i,length);
    //从最后一个元素开始对序列进行调整，不断的缩小调整的范围直到第一个元素
    for(i=length-1;i>0;--i)
    {
        //把第一个元素和当前的最后一个元素交换，
        //保证当前的最后一个位置的元素都是在现在的这个序列之中最大的
        array[i]=array[0]^array[i];
        array[0]=array[0]^array[i];
        array[i]=array[0]^array[i];
        //不断缩小调整heap的范围，每一次调整完毕保证第一个元素是当前序列的最大值
        heapAdjust(array,0,i);
    }
}

int a[1000001];
int main()
{
	int n,m,i,j,k;
	while(~scanf("%d%d",&n,&m)&&n&&m)
	{
		for(i=0;i<n;i++)
			scanf("%d",a+i);
	//	qsort(a,n,sizeof(a[0]),cmp);
	//	shellsort(a,0,n-1);
		heapsort(a,n);
		for(i=n-1;i>n-m;i--)
			printf("%d ",a[i]);
		printf("%d\n",a[i]);
	}
	return 0;
}
