
#include<stdio.h>
int main()
{
    int a=0,b,j,i,n;
    scanf("%d",&n);

    for(i=1;i<=n/2;i++){
        if(n%i==0){
            a=a+i;
        }
    }
    if(n==a)
        printf("perfect number %d\n",a);
    else
        printf("Imperfect number\n");

    return 0;
}
