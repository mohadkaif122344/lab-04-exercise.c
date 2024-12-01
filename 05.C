/*
5.	Write a program to print the sum of digits of a
    number using for loop.
*/
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of digits using a for loop
    for (; num != 0; num /= 10) {
        remainder = num % 10;  // Get the last digit
        sum += remainder;       // Add the digit to the sum
    }

    // Output the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
