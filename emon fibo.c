/// this is sheet
#include<stdio.h>
int main()
{
    int a=0,b=1,sum,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",b);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}

