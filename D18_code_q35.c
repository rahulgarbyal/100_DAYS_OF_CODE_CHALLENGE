#include<stdio.h>
int main()
{
    int n,count=1;
    int copy_n;

    printf("ENTER A POSITIVE NUMBER : ");
    scanf("%d", &n);

    copy_n = n;

    if (copy_n == 1)
    {
        printf("%d HAS ONLY ONE FACTOR WHICH IS %d ITSELF \n",n,n);
    }
    else if (copy_n == 0)
    {
        printf("ALL NON-ZERO INTEGERS ARE FACTORS OF %d \n", n);
    }
    else
    {
        printf("THE MULTIPLES OF %d ARE : ", n);
        while (count <= n)
        {
            if (copy_n%count == 0)
            {
                printf("%d ", count);
                count++;
            }
            else
            {
                count++;
            }
        }
    }
    printf("\n");
    return 0;
}