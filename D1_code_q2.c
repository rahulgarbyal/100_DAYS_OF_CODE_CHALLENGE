#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter your first number : ");
    scanf("%d" , & n1);

    printf("Enter your second number : ");
    scanf("%d" , & n2);
    
    int sum,diff,quo,prdt;
    sum = n1 + n2;
    diff = n1 - n2;
    prdt = n1 * n2;
    quo = n1/n2;

    printf("The sum of your first and second number is : %d \n", sum);
    printf("The difference of your first and second number is : %d \n", diff);
    printf("The product of your first and second number is : %d \n", prdt);
    printf("The quotient of your first and second number is : %d \n", quo);

    return 0;
}