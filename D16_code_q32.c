#include<stdio.h>
int main()
{
    int num, rev = 0,og,remain;

    printf("ENTER A NUMBER TO CHECK IF ITS PALINDROME : ");
    scanf("%d", &num);

    og = num;

    while (num)
    {
        remain = num % 10;
        rev = rev * 10 + remain;
        num /= 10;
    }


    if (og == rev)
    {
        printf("it is a palindrome!! \n");
    }
    else
    {
        printf("not a palindrome!! \n");
    }
    
}