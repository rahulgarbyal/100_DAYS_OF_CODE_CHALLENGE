#include<stdio.h>
int main ()
{
    int a = 1,n;

    printf("ENTER A VALUE FOR n : ");
    scanf("%d", &n);

    while (a <= n)
    {
        printf("%d ", a);
        a++;
    }
    printf("\n");
    return 0;
}