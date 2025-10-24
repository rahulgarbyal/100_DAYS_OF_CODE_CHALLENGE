#include<stdio.h>
int main()
{
    int unit_con,bill;

    printf("ENTER HOE MUCH ELECTRICITY UNITS YOU HAVE CONSUMED : ");
    scanf("%d", &unit_con);

    if (unit_con <= 100 && unit_con > 0)
    {
        bill = unit_con * 5;
        printf("BILL : \u20B9 %d \n", bill);
    }
    else if (unit_con <= 200)
    {
        bill = (100 * 5) + ((unit_con - 100) * 7);
        printf("BILL : \u20B9 %d \n", bill);
    }
    else if (unit_con <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((unit_con - 200) * 10);
        printf("BILL : \u20B9 %d \n", bill);
    }
    else if (unit_con > 300)
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((unit_con - 300) * 12);
        printf("BILL : \u20B9 %d \n", bill);
    }
    
    return 0;
}