#include <stdio.h>

// Function to calculate the n-th Fibonacci number iteratively
unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, temp;

    // If n is 0 or 1, the Fibonacci number is n itself
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Calculate Fibonacci numbers iteratively from 2 to n
    for (unsigned int i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    unsigned int n;

    // Input: Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%u", &n);

    // Output: Print the n-th Fibonacci number
    printf("The %u-th Fibonacci number is: %llu\n", n, fibonacci(n));

    return 0;
}
