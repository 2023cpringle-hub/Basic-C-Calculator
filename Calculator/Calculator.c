#include <stdio.h>

float add(float a, float b);

int main(){
    float result;
    result = add(5.0, 3.0);
    printf("The result of addition is: %.2f\n", result);
}

float add(float a, float b){
    return a + b;
}