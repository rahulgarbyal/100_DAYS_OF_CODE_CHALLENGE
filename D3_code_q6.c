#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter first number : ");
    scanf("%d" , &a);
    
    printf("Enter second number : ");
    scanf("%d" , &b);

    printf("The numbers before swapping : first num = %d, second num = %d\n", a,b);

    c=a;
    a=b;
    b=c;

    printf("The numbers after swapping : first num = %d, second num = %d\n", a,b);

    return 0;
}