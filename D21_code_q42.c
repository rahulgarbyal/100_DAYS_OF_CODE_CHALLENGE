#include<stdio.h>
int main() {
    int num,sum_div=1,temp_num;

    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    int limit=num/2;
    temp_num = num;

    for (int i=2;i <= limit;i++) {
        if (temp_num % i == 0) {
            sum_div += i;
        }
        else 
            continue;
    }

    if (sum_div == num) {
        printf("THE NUMBER IS A PERFECT NUMBER \n");
    }
    else
        printf("THE NUMBER IS NOT A PERFECT NUMBER \n");

    return 0;    
}