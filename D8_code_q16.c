#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("ENTER FIRST NUMBER : ");
    scanf("%d", &n1);

    printf("ENTER SECOND NUMBER : ");
    scanf("%d", &n2);

    printf("ENTER THIRD NUMBER : ");
    scanf("%d", &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%d is greatest \n", n1);
        }
        else
            printf("%d is greatest \n", n2);
    }
    else if (n2 > n3)
    {
        printf("%d is greatest \n", n2);
    }
    else
        printf("%d is the greatest \n", n3);
}