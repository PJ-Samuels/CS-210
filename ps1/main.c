#include <stdio.h>
#include "maths.h"
#include <stdlib.h>
#include <ctype.h>

int main(){
    float number1,number2;
    char operator;
    float result = 0;
    do
    {
        printf("Enter an expression: ");
        scanf("%f%c%f", &number1, &operator, &number2);
        if(operator == '+'|| operator =='-'|| operator == '*'||operator == '/'||operator == '^'||operator == '$')
            result = 1;
    }
    while(result == 0);

    switch(operator){
        case '+':
            result = add(number1, number2);
            break;
        case '-':
            result = subtract(number1, number2);
            break;
        case '*':
            result = multiply(number1, number2);
            break;
        case '/':
            result = divide(number1, number2);
            break;
        case '^':
            result = power(number1, number2);
            break;
        case '$':
            printf("hit");
            result = recursivePower(number1, number2);
            break;
    }

    printf("Result: %.2f", result);
//    printf("hit");

    return 0;
}






