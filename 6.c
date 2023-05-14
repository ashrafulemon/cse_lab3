#include<stdio.h>
int main()
{
    int i,j,n,k,sum=0;
    float avg;
    for(i=1;i<=5;i++){
        scanf("%d",&j);
        sum=sum+j;
    }
    avg= sum/5.00;
    printf("sum = %d, avg = %f",sum,avg);

    return 0;
}
