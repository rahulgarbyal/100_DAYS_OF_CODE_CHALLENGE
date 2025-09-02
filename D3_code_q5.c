#include <stdio.h>

int main()
{
    float cel,fah;

    printf("Enter the temperature in celcius : ");
    scanf("%f" , &cel);
    
    fah = (cel*9/5)+32;
    
    printf("The temperature in fahrenheit is : %f", fah);

    return 0;
}