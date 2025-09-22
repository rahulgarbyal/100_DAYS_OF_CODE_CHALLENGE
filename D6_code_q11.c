#include<stdio.h>
int main()
{
    int n1;
    printf("ENTER AN INTEGER NUMBER : ");
    scanf("%d", &n1);

    if (n1%2==0)
        printf("THE NUMBER IS EVEN \n");
    else
        printf("THE NUMBER IS ODD \n");
    return 0;
}