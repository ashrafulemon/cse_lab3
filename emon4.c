#include<stdio.h>
int main()
{
    int a,n,sum=0;
    scanf("%d",&n);
    while(1){
        a=n%10;
        printf("%d",a);
        sum=sum+a;
        n=n/10;
        if(n==0)
            break;
    }
    printf("\n%d",sum);
    return 0;
}

