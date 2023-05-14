//my
#include<stdio.h>
int main()
{
    int i=2,m=1,n,k=1;
    scanf("%d",&n);

    while(n!=0 && n!=1){
        if(n%i==0){
            if(k!=0){
                printf("%d ",i);
                k=0;
            }
            n=n/i;
            //i=2;
            continue;
        }
        i++;
        k++;
    }
    return 0;
}
