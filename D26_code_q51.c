#include<stdio.h>
int main() {
    int i,j,k;
    for (i=5;i>=1;i--) {
        //spaces
        for(j=1;j<i;j++) {
            printf(" ");
        }
        //print numbers from i to 5
        for(k=i;k<=5;k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}