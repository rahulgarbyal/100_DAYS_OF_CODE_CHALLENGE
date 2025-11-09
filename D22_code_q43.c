#include<stdio.h>
int fac_torial(int n);
int main() {
    int num,temp_num,fact_ext,ext;
    int check_strong = 0;

    printf("ENTER A NUMBER : ");
    scanf("%d", &num);

    temp_num = num;
    while (temp_num) {
        ext = temp_num % 10;
        fact_ext = fac_torial(ext);
        check_strong += fact_ext;
        temp_num /= 10;
    }

    if (check_strong == num) {
        printf("THE NUMBER IS A STRONG NUMBER \n");
    }
    else {
        printf("THE NUMBER IS NOT A STRONG NUMBER \n");
    }

    return 0;
}

int fac_torial(int n) {
    int fac = 1;
    while (n) {
        if (n == 0) {
            fac = 1;
            break;
        }    
        else {
            fac = fac * n;
            n--;
        }
    }
    return fac;
}