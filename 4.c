#include<stdio.h>
int main()
{
    int i,a=0,b=1,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",b);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}
