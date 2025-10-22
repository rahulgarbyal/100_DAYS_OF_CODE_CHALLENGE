#include<stdio.h>
int main()
{
    float n1,n2,n3,discriminant;

    printf("ENTER COEFFICIENT OF X^2 : ");
    scanf("%f", &n1);

    printf("ENTER COEFFICIENT OF X : ");
    scanf("%f", &n2);

    printf("ENTER CONSTANT C : ");
    scanf("%f", &n3);

    discriminant = n2*n2 + 4*n1*n3;

    if (discriminant > 0)
    {
        printf("ROOTS ARE REAL AND DIFF \n");
    }
    else if (discriminant == 0)
    {
        printf("ROOTS ARE REALS AND SAME \n");
    }
    else
    {
        printf("ROOTS ARE COMPLEX \n");
    }
    
    return 0;
}