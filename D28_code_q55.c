#include<stdio.h>
int main () {
    int n,i,j,isprime;
    printf("enter no. of terms: ");
    scanf("%d", &n);

    for (i=2;i<=n;i++) {
        isprime=1;
        for (j=2;j*j<=i;j++) {
            if (i % j == 0) {
                isprime=0;
                break;
            }
        }
        if (isprime) {
            printf("%d ", i);
        }
    }
    return 0;
}