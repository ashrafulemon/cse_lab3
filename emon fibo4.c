


#include<stdio.h>
int main()
{
    int a=0,b=0,sum=1,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       // printf("%d ",sum);
        sum=sum+a;
        a=b;
        b=sum;
        printf("%d ",b);
    }
    return 0;
}

