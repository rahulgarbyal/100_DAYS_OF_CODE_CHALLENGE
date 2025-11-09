#include<stdio.h>
int main () {
    int nterm;
    float sum = 0.00;
    int numerator = 2, denominator = 3;

    printf("ENTER NUMBER OF TERMS : ");
    scanf("%d", &nterm);

    for (int i=1;i<=nterm;i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    printf("THE SUM OF SERIES 2/3 + 4/7 + 6/11 + .... upto %d TERMS IS : %.2f\n", nterm, sum);
    return 0;
}