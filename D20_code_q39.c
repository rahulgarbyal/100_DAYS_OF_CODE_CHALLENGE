#include<stdio.h>
int SUM_OF_ODD(int);
int main() {
int num,SOOD;
printf("ENTER A NUMBER : ");
scanf("%d", &num);

SOOD = SUM_OF_ODD(num);

printf("THE SUM OF ODD DIGITS OF NUMBER %d IS : %d \n", num, SOOD);

return 0;
}
int SUM_OF_ODD(int n) {
    int ext,sum=0;

    while (n) {
        ext = n % 10;
        if (ext % 2 == 0) {
            n /= 10;
        }
        else {
            sum = sum + ext;
            n /= 10;
        }
    }
    return sum;
}