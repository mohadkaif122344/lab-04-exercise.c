/*
10.	Write a program to generate Fibonacci
    series.
*/
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Check if the number of terms is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci Series: %d\n", first);
    } else {
        printf("Fibonacci Series: %d %d ", first, second);  // Print the first two terms

        // Generate the Fibonacci series
        for (int i = 3; i <= n; i++) {
            next = first + second;  // Sum of the previous two terms
            printf("%d ", next);     // Print the next term
            first = second;         // Update first to the second term
            second = next;          // Update second to the next term
        }

        printf("\n");
    }

    return 0;
}
