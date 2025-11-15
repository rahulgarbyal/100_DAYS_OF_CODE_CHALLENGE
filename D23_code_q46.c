#include<stdio.h>
int main() {
    int n=5; ///no. of lines
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}