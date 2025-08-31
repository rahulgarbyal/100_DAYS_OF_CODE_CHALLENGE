#include <stdio.h>

int main()
{
    int num1,num2;

    printf("Enter your first number : ");
    scanf("%d", & num1);

    printf("Enter your second number : ");
    scanf("%d", & num2);

    int sum = num1 + num2;
    printf("The sum of your first and second number is : %d", sum);
    
    return 0;
}