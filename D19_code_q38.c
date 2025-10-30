#include<stdio.h>
int SUMOFDIGIT(int a);
int main() {
    int num,SOD;

    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    SOD = SUMOFDIGIT(num);
    printf("SUM OF DIGITS OF %d IS : %d \n", num, SOD);

    return 0;
}
int SUMOFDIGIT(int a) {
    int extract,sumofd=0;
    while (a) {
        extract = a % 10;
        a /= 10;
        sumofd = sumofd + extract;
    }
    return sumofd;
}