#include<stdio.h>
int main()
{
    int late_day,fine=0;

    printf("ENTER THE LATE DAY : ");
    scanf("%d", &late_day);

    if (late_day <= 5 && late_day > 0)
    {
        fine = late_day * 2;
        printf("FINE %d\n", fine);
    }
    else if (late_day <= 10)
    {
        fine = (5 * 2) + ((late_day - 5) * 4);
        printf("FINE %d\n", fine);
    }
    else if (late_day <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((late_day - 10) * 6);
        printf("FINE %d\n", fine);
    }
    else if (late_day > 30)
    {
        printf("MEMBERSHIP IS CANCELLED \n");
    }
    else
    {
        printf("INVALID INPUT \n");
    }
    return 0;
}