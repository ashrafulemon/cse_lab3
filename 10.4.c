//my
#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        k=1;
        if(n%i==0){
            for(j=2;j<=i/2;j++){
                if(i%j==0){
                    k=0;
                    break;
                }
            }
            if(k==1)
                printf("%d ",i);
        }
    }
    return 0;
}
