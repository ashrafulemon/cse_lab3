#include<stdio.h>
int main()
{
    int i,a,b,n,sum=1;
    scanf("%d %d",&a,&b);
    if(a>b)
       n=b;
    else
        n=a;
    for(i=n;i>0;i--){
        if(a%i==0 && b%i==0)
            break;
    }
    printf("%d",i);
    return 0;
}

