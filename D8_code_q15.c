#include<stdio.h>
int main()
{
    char ch;

    printf("ENTER A CHARACTER : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("%c is a upper case alphabet. \n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a lower case alphabet. \n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit between 0 to 9 \n", ch);
    else
        printf("%c is a special character \n");
    return 0;
}