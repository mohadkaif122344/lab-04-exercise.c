/*
9.	Write a Program to Check Whether a Number is 
    Prime or not.
*/
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num <= 1) {
        isPrime = 0;  // Numbers less than 2 are not prime
    } else {
        // Check for factors from 2 to the square root of the number
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If a factor is found, it's not a prime
                break;  // No need to check further
            }
        }
    }

    // Output whether the number is prime or not
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
