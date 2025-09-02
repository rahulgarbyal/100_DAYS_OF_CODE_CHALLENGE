#include <stdio.h>

int main()
{
    int n,sum;

    printf("Enter any integer (only positive) : ");
    scanf("%d" , &n);
    
    sum = n*(n+1)/2;

    printf("The sum of first %d natural numbers is : %d\n", n,sum);

    return 0;
}