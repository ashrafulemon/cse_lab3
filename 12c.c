#include<stdio.h>
int main()
{
    int a,b,i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


