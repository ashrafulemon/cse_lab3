#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("input number =");
    scanf("%d",&n);
    printf("\ninput range =");
    scanf("%d",&j);


    for(i=1;i<=j;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }

    return 0;
}
