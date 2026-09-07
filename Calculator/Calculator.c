#include <stdio.h>

// Function prototypes for calculator operations
float add(float a, float b);
float subtract(float c, float d);
float multiply(float e, float f);
float divide(float g, float h);

// Main function to execute the calculator operations based on user input
int main(){
    // Variable to store user's choice of operation
    int userChoice;
    printf("Select an operation Add (1), Subtract (2), Multiply (3), Divide (4): /n");
    scanf("%d", &userChoice);
    // Functions are called based on the user's choice, and the results are printed to the console
    if (userChoice == 1) {
        float num1, num2;
        printf("Enter two numbers to add: ");
        scanf("%f %f", &num1, &num2);
        float result = add(num1, num2);
        printf("The result of addition is: %.2f\n", result);
    } else if (userChoice == 2) {
        float num1, num2;
        printf("Enter two numbers to subtract: ");
        scanf("%f %f", &num1, &num2);
        float result = subtract(num1, num2);
        printf("The result of subtraction is: %.2f\n", result);
    } else if (userChoice == 3) {
        float num1, num2;
        printf("Enter two numbers to multiply: ");
        scanf("%f %f", &num1, &num2);
        float result = multiply(num1, num2);
        printf("The result of multiplication is: %.2f\n", result);
    } else if (userChoice == 4) {
        float num1, num2;
        printf("Enter two numbers to divide: ");
        scanf("%f %f", &num1, &num2);
        // Check for division by zero before performing the operation
        if (num2 != 0) {
            float result = divide(num1, num2);
            printf("The result of division is: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid choice. Please select a valid operation.\n");
    }
    return 0;
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