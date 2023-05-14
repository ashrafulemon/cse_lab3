#include<stdio.h>

int main() {
    int counter, N, i, isPrime;

    printf("Enter a Number\n");
    scanf("%d", &N);

    printf("List of Prime Factors of %d\n", N);
    for(counter = 2; counter <= N; counter++) {
        if(N%counter==0) {
            isPrime = 1;
            for(i = 2; i <=(counter/2); i++) {
                if(counter%i==0) {
                    isPrime=0;
                    break;
                }
            }

            if(isPrime==1)
                printf("%d ", counter);
        }
    }
    return 0;
}
