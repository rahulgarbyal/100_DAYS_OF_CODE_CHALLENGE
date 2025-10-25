#include<stdio.h>
int main()
{
    int a,n;
    int fac = 1;

    printf("ENTER A NUMBER TO GET IT'S FACTORIAL : ");
    scanf("%d", &n);

    a=n;

    while (a)
    {
        fac = fac * a;
        a--;
    }
    printf("FACTORIAL OF %d IS : %d \n", n, fac);
    return 0;
}