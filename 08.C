/*
8.	Write a program to check number is Armstrong or not.
    (Hint: A number is Armstrong if the sum of cubes of individual
    digits of a number is equal to the number itself).
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    original = num;

    // Calculate the sum of cubes of individual digits
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        sum += remainder * remainder * remainder;  // Add the cube of the digit to sum
        num = num / 10;  // Remove the last digit
    }

    // Check if the sum of cubes equals the original number
    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
