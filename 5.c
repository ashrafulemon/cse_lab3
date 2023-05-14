#include<stdio.h>
int main()
{
    int i,j=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%7==0)
            j++;
    }
    printf("%d",j);
    return 0;
}
