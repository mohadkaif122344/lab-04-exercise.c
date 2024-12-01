/*
12.	Write a program to find GCD (greatest common divisor or HCF)
    and LCM (least common multiple) of two numbers.
*/
#include <stdio.h>

// Function to find the GCD (or HCF) of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Remainder of a divided by b
        a = temp;
    }
    return a;
}

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // LCM formula: LCM(a, b) = (a * b) / GCD(a, b)
}

int main() {
    int num1, num2;

    // Input the two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print GCD and LCM
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
