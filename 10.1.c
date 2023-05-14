//my
#include<stdio.h>
int main()
{
    int i=2,n;
    scanf("%d",&n);

    while(n!=0 && n!=1){
        if(n%i==0){
            printf("%d ",i);
            n=n/i;
            //i=2;
            continue;
        }
        i++;
    }
    return 0;
}
