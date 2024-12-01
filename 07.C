/*
7.	Write a program to find the factorial of
    a number.
*/
#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate the factorial using a for loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;  // Multiply the current number to factorial
        }

        // Output the factorial
        printf("Factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
