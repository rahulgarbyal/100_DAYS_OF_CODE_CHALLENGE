#include<stdio.h>
int main()
{
    int operand1,operand2,result,operator;
    char op;

    printf("ENTER OPERAND FIRST : ");
    scanf("%d", &operand1);

    printf("ENTER OPERAND SECOND : ");
    scanf("%d", &operand2);

    printf("ENTER THE OPERATOR YOU WANT TO USE (+,-,*,/,%%) : ");
    scanf(" %c", &op); 

    operator = op; //made a copy for op in case if we want to use for other things

    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        printf("SUM IS : %d\n", result);
        break;
    case '-':
        result = operand1 - operand2;
        printf("DIFFERENCE IS : %d\n", result);
        break;
    case '*':
        result = operand1 * operand2;
        printf("PRODUCT IS : %d\n", result);
        break;
    case '/':
        if (operand2 != 0)
        {
            result = operand1 / operand2;
            printf("DIVISION IS : %d\n", result);
        }
        else
            printf("ERROR : DIVISION BY ZERO \n");
        break;
    case '%':
        if (operand2 != 0)
        {
            result = operand1 % operand2;
            printf("MODULUS IS : %d\n", result);
        }
        else
            printf("ERROR : MODULO BY ZERO \n");
        break;

    default :
        printf("INVALID INPUT!! PLEASE ENTER CORRECT OPERATOR FROM GIVEN OR OPERAND IN INT VALUE..\n");
        break;
    }
    return 0;
}