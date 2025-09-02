#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter first number : ");
    scanf("%d" , &a);

    printf("Enter second number : ");
    scanf("%d" , &b);

    printf("the numbers before swapping : first = %d, second = %d\n", a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("the numbers after swapping : first = %d, second = %d\n", a,b);

    return 0;
}