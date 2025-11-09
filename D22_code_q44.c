#include<stdio.h>
int main () {
    int nterm;
    float sum = 0.00;
    int numerator = 1, denominator = 2;

    printf("ENTER NUMBER OF TERMS : ");
    scanf("%d", &nterm);

    for (int i=1;i<=nterm;i++) {
        if (i == 1) {
            sum += 1;
        }
        else {
            sum += (float)numerator / denominator;
        }

        numerator += 2;
        denominator += 2;
    }
    printf("THE SUM OF SERIES 1 + 3/4 + 5/4 + .... upto %d TERMS IS : %f\n", nterm, sum);
    return 0;
}