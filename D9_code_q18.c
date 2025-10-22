#include<stdio.h>
int main()
{
    int percent;

    printf("ENTER YOUR PERCENTAGE IN INTEGER (ROUND OFF TO NEAREST INTEGER IF IN DECIMAL) : ");
    scanf("%d", &percent);

    if (percent >= 90 && percent <= 100)
    {
        printf("GRADE A \n");
    }
    else if (percent >= 80 && percent < 90)
    {
        printf("GRADE B \n");
    }
    else if (percent >= 70 && percent < 80)
    {
        printf("GRADE C \n");
    }
    else if (percent >= 60 && percent < 70)
    {
        printf("GRADE D \n");
    }
    else if (percent < 60)
    {
        printf("GRADE F \n");
    }
    else
        printf("ENTER PERCENTAGE IN INTEGER (ROUND OFF) \n ");

    return 0;    
}