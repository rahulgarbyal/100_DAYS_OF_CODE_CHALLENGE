#include<stdio.h>
int main() {
    int num,temp,first_dig,last_dig,power=1,swap_num;

    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    temp = num;
    last_dig = num % 10;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first_dig = temp;

    if (num < 10) {
        printf("NUMBER ARE SWAPPING : %d \n", num);
        return 0;
    }

    int middle = num % power;  // it will remove first digit
    middle /= 10;              // it will remove last digit 

    swap_num = last_dig * power + middle * 10 + first_dig;

    printf("NUMBER AFTER SWAPPING FIRST AND LAST DIGIT IS : %d\n", swap_num);
    return 0;
}