#include<stdio.h>
int main()
{
    int a=1,n;
    int sum = 0;
    
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    while (n)
    {
        if (a % 2 != 0)
        {
            sum += a;
            a++;
            n--;
        }
        else
        {
            a++;
            continue;
        }
    }
    printf("THE SUM OF THE FIRST n ODD NUMBERS IS : %d \n", sum);
    return 0;
}