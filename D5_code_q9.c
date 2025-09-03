#include <stdio.h>
#include <math.h>

int main()
{
    float P,R,T;
    float SI, CI;

    printf("Enter principle amount : ");
    scanf("%f", &P);

    printf("Enter rate of interest (in %%)");
    scanf("%f" , &R);

    printf("Enter Time in Years : ");
    scanf("%f" , &T);

    SI = (P * R * T)/100;
    CI = P * pow((1 + R / 100), T) - P;

    printf("\n SIMPLE INTEREST = %f \n", SI);
    printf("\n COMPOUND INTEREST = %f \n", CI);

    return 0;
}