#include<stdio.h>
int main()
{
    int n,rev_n,ext;
    int copy_n;
    printf("ENTER THE NUMBER YOU WANT TO REVERSE : ");
    scanf("%d", &n);

    copy_n = n;

    printf("REVERSE OF %d IS : ", n);

    while (n)
    {
        if (n % 10 == 0)
        {
            copy_n = n / 10;
            n /= 10;
        }
        else
            break;
    }
    
    while (copy_n)
    {
        ext = copy_n % 10;
        rev_n = ext;
        printf("%d", rev_n);
        copy_n /= 10;
    }
    printf("\n");
    return 0;
}