#include<stdio.h>
void tobin(int n)
{
    if (n > 1)
    {
        tobin(n/2); //recursive call
    }
    printf("%d", n%2);
}

int main()
{
    int num;
    printf("ENTER NUMBER : ");
    scanf("%d", &num);

    printf("IT'S BINARY REPRESENTATION IS : ");

    if (num == 0)
        printf("0 \n");
    else
        tobin(num);

    printf("\n");
    return 0;
}