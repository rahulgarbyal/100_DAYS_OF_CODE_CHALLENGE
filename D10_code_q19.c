#include<stdio.h>
int main()
{
    int s1,s2,s3;
     printf("ENTER SIDE 1 : ");
     scanf("%d", &s1);

     printf("ENTER SIDE 2 : ");
     scanf("%d", &s2);

     printf("ENTER SIDE 3 : ");
     scanf("%d", &s3);

     if (s1 == s2 && s1 == s3)
     {
        printf("THE TRIANGLE IS EQUILATERAL \n");
     }
     else if (s1 == s2 || s2 == s3 || s1 == s3)
     {
        printf("THE TRIANGLE IS ISOSCELES \n");
     }
     else   
        printf("THE TRIANGLE IS SCALENE \n");

    return 0;
}