/// 1^2 +2^2 + n^2=

#include<stdio.h>
int main()
{
    int i,n, sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2){
        sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;
}

/*#include<stdio.h>
int main()
{
    int a,b,c,i,j,n,sum=0;
    scanf("%d",&n);
    i=1;
    //for(i=1;i<=n;i=i+2){
   // while(i<=n){
   do{
        sum=sum+i*i;
        i=i+2;
    }
    while(i<=n);
    printf("%d",sum);
    return 0;
}*/
