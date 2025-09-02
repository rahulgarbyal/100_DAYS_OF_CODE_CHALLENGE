#include <stdio.h>

int main()
{
    float len,br;

    printf("Enter the length of the rectangle : ");
    scanf("%f", & len);

    printf("Enter the breadth of the rectangle : ");
    scanf("%f" , & br);

    float area, perimeter;
    
    area = len * br;
    perimeter = 2*(len + br);

    printf("The area of the rectangle is : %f \n", area);
    printf("The perimeter of the rectangle is : %f", perimeter);

    return 0;
}