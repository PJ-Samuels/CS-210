//
// Created by PJ Samuels on 2/16/21.
//
#include "maths.h"
float add( float number1, float number2){
    return number1+number2;
}
float subtract(float number1, float number2){
    return number1 - number2;
}
float multiply( float number1, float number2){
    return number1*number2;
}
float divide(float number1, float number2){
    return number1 / number2;
}
float power(float number1, float number2){
    float answer = 1;
    for(int i = 0 ; i < number2; i++)
        answer = answer * number1;
    return answer;
}
float recursivePower(float base, float count){
    if(count != 0)
        return(base * recursivePower(base, count - 1));
    else
        return 1;
}
