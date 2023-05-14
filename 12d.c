#include<stdio.h>
int main()
{
    int a,b,i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1 || j==1 || i==5 || j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


