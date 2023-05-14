
#include<stdio.h>
int main()
{
    int i,x,y,sum=1;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++){
        sum=sum*x;
    }
    if(x==0 &&y ==0)
        printf("ivalid\n");
    else
        printf("%d",sum);
    return 0;
}
