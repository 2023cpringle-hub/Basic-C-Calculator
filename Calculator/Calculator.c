#include <stdio.h>

float add(float a, float b);
float subtract(float c, float d);
float multiply(float e, float f);
float divide(float g, float h);

int main(){
    float result, result2, result3, result4;
    result = add(5.0, 3.0);
    printf("The result of addition is: %.2f\n", result);
    result2 = subtract(10.0, 3.0);
    printf("The result of subtraction is: %.2f\n", result2);
    result3 = multiply(4.0, 3.0);
    printf("The result of multiplication is: %.2f\n", result3);
    result4 = divide(10.0, 2.0);
    printf("The result of division is: %.2f\n", result4);
}

float add(float a, float b){
    return a + b;
}

float subtract(float c, float d){
    return c - d;
}

float multiply(float e, float f){
    return e * f;
}

float divide(float g, float h){
    return g / h;
}