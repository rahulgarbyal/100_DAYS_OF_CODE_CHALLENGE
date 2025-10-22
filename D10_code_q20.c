#include<stdio.h>
int main()
{
    int day;

    printf("ENTER A NUMBER FROM 1 TO 7 : ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("MONDAY \n");
            break;
        
        case 2:
            printf("TUESDAY \n");
            break;

        case 3:
            printf("WEDNESDAY \n");
            break;

        case 4:
            printf("THURSDAY \n");
            break;

        case 5:
            printf("FRIDAY \n");
            break;

        case 6:
            printf("SATURDAY \n");
            break;
        
        case 7:
            printf("SUNDAY \n");
            break;
        
        default :
            printf("INVALID INPUT! PLEASE ENTER A VALID NUMBER BETWEEN 1 TO 7 \n");
    }

    return 0;
}