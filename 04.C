/*
4.	Write a program to print number in reverse 
    order with a difference of 2.
*/
#include <stdio.h>

int main() {
    int start;

    // Input the starting number
    printf("Enter the starting number: ");
    scanf("%d", &start);

    // Print numbers in reverse order with a difference of 2
    printf("Numbers in reverse order with a difference of 2:\n");
    for (int i = start; i >= 0; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
