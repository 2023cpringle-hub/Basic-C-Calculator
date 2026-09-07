#include <stdio.h>

float add(float a, float b);
float subtract(float c, float d);

int main(){
    float result, result2;
    result = add(5.0, 3.0);
    printf("The result of addition is: %.2f\n", result);
    result2 = subtract(10.0, 3.0);
    printf("The result of subtraction is: %.2f\n", result2);
}

float add(float a, float b){
    return a + b;
}

float subtract(float c, float d){
    return c - d;
}