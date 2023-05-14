#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,sum=0,x,num=0;
    scanf("%d",&n);
    while(1){
        x=n%10;
        sum=sum+x;
        num=(num*10)+x;
        //printf("%d",x);
        n=n/10;
        if(n==0)
            break;
    }

    printf("\n%d",sum);
    printf("\n%d",num);

    return 0;
}
