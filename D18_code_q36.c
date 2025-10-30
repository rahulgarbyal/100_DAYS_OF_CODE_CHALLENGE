#include<stdio.h>
int main()
{
    int n1,n2,temp;
    int num1,num2;

    printf("ENTER FIRST NUMBER : ");
    scanf("%d", &n1);

    printf("ENTER SECOND NUMBER : ");
    scanf("%d", &n2);

    num1 = n1;
    num2 = n2;
    //euclidean algorithm is used here
    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    printf("HCF OF %d AND %d IS : %d \n", num1, num2, n1);
    return 0;

}