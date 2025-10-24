#include<stdio.h>
int main()
{
    float COSTP,SELLP,PROFIT_LOSS,PERCENT;

    printf("ENTER THE COST PRICE : ");
    scanf("%f", &COSTP);

    printf("ENTER THE SELLING PRICE : ");
    scanf("%f", &SELLP);

    if (SELLP > COSTP)
    {
        PROFIT_LOSS = SELLP - COSTP;
        PERCENT = (PROFIT_LOSS / COSTP) * 100;
        printf("PROFIT = %.2f \n", PROFIT_LOSS);
        printf("PROFIT PERCENTAGE = %.2f%% \n", PERCENT);
    }
    else if (COSTP > SELLP)
    {
        PROFIT_LOSS = COSTP - SELLP;
        PERCENT = (PROFIT_LOSS / COSTP) * 100;
        printf("LOSS = %.2f \n", PROFIT_LOSS);
        printf("LOSS PERCENTAGE = %.2f%% \n", PERCENT);
    }
    else
    {
        printf("NO PROFIT , NO LOSS \n");
    }
    return 0;
}