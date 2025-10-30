#include<stdio.h>
int main() {
    int binary,onesCompliment=0;
    int digit,place=1;

    printf("ENTER A BINARY NUMBER : ");
    scanf("%d", &binary);

    while (binary != 0) {
        digit = binary % 10;

        if (digit == 0) {
            onesCompliment += 1 * place;
        }
        else if (digit == 1) {
            onesCompliment += 0 * place; 
        }
        else {
            printf("Invalid binary number! \n");
            return 0;
        }

        binary /= 10;
        place *= 10;
    }
    printf("1's Compliment: %d\n", onesCompliment);

    return 0;
}


    
