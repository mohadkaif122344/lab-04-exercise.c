/*
11.	If a four-digit number is input through the keyboard,
    write a program to obtain the sum of the first and last
     digit of this number.
*/
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    // Input the four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Get the last digit (using modulus operator)
    lastDigit = num % 10;

    // Get the first digit (dividing by 1000 until the number is a single digit)
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Calculate the sum of first and last digit
    sum = firstDigit + lastDigit;

    // Output the result
    printf("Sum of the first and last digit: %d\n", sum);

    return 0;
}
