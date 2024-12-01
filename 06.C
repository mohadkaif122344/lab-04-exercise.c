/*
6.	Write a program to check whether a number is
    Palindrome or not.
*/
#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversed = reversed * 10 + remainder;  // Append the digit to reversed
        num = num / 10;  // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
