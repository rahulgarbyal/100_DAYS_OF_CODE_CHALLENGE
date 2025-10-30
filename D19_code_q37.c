#include<stdio.h>
int main() {
    int n1,n2,hcf,lcm;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d", &n1);

    printf("ENTER SECOND NUMBER : ");
    scanf("%d", &n2);

    int x = n1,y = n2;

    //first we find hcf using euclidean algorithm
    while (n2 != 0) {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    hcf = n1;

    //Calculate LCM
    
    lcm = (x * y) / hcf;
    printf("LCM OF %d AND %d IS : %d \n", x, y, lcm);
    return 0;
}