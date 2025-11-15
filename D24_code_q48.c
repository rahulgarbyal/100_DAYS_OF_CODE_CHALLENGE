#include<stdio.h>
int main() {
    int n=6;
    for (int i=1;i<=5;i++) {
        for (int j=n-1;j<=5;j++) {
            printf("%d", j);
        }
        printf("\n");
        n--;
    }
    return 0;
}