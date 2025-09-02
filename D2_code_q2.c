#include <stdio.h>

int main()
{
    float rad;
    
    printf("Enter the value of radius : ");
    scanf("%f", & rad);

    float circum,area,pie=3.14;
    circum = 2*pie*rad;
    area = pie*rad*rad;

    printf("The circumference of the circle of given radius is : %f \n",circum);
    printf("The area of the given circle is : %f \n", area);
    
    return 0;
}