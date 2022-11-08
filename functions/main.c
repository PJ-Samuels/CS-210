#include <stdio.h> //the < > mean a system file
#include "maths.h"//the " " mean a local header file

int main() {
    float result = adder(123.45, 456.78);
    printf("Result: %f", result);
    return 0;
}
