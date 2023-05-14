#include<stdio.h>
int main()
{
    int i,j=0,k,n,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            j++;
            printf("%d ",i);

        }
    }
    printf("\ncount = %d\n",j);

    return 0;
}

