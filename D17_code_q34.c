#include<stdio.h>
int main()
{
    int n,copy_n,a=2,check_prime = 0;

    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    
    copy_n = n;

    if (copy_n <= 1)
    {
        check_prime = 1;
    }

    else
    {
        while (a < n)
        {
            if (copy_n % a != 0)
            {
                a++;
            }
            else
            {
                check_prime = 1;
                break;
            }
        }
    }

    

    if (check_prime == 0)
    {
        printf("%d IS A PRIME NUMBER \n", n);
    }
    else
    {
        printf("%d IS NOT A PRIME NUMBER \n", n);
    }

    return 0;
}