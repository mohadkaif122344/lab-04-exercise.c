/*
1.	Write a program to count number of digits 
    in a given integer.
*/
#include <stdio.h>

int main() {
    int num, count = 0;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Handle negative numbers
    if (num < 0) {
        num = -num; // Make the number positive
    }

    // Count the number of digits
    while (num != 0) {
        num = num / 10; // Remove the last digit
        count++;        // Increment the digit count
    }

    // If the number is 0, set count to 1 (because 0 has one digit)
    if (count == 0) {
        count = 1;
    }

    // Output the result
    printf("The number of digits is: %d\n", count);

    return 0;
}
