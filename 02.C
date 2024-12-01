/*
2.	Write a program to reverse a given
    integer.
*/
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversed = reversed * 10 + remainder;  // Append the digit to reversed
        num = num / 10;  // Remove the last digit
    }

    // Output the reversed number
    printf("The reversed number is: %d\n", reversed);

    return 0;
}
