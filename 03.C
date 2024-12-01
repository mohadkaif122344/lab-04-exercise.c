/*
3.	Write A Program to print the table of given no.
    on the screen.
*/
#include <stdio.h>

int main() {
    int i,num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the multiplication table
    printf("Multiplication table of %d is:\n", num);
    for ( i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
