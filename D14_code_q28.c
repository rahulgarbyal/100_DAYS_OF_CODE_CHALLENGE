#include<stdio.h>
int main()
{
    int a=1,n;
    int product = 1;

    printf("ENTER A NUMBER (n) : ");
    scanf("%d", &n);

    while (a <= n)
    {
        if (a % 2 == 0)
        {
            product *= a;
            a++;
        }
        else
        {
            a++;
            continue;
        }
    }
    printf("THE PRODUCT OF EVEN NUMBERS FROM 1 TO %d IS : %d \n", n, product);
    return 0;
}