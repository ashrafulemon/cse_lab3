#include<stdio.h>
int main()
{
    int i,j=0,k,n,l;
    scanf("%d",&n);

    if(n==0 || n==1)
        j=1;

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            j=1;
            //printf("%d %d\n",i,n%i);
            break;
        }
    }

    if(j==0)
        printf("prime\n");
    else
        printf("not prime\n");

    return 0;
}
