/*
13.	Write programs to display each of the following patterns.
A
A B
A B C
A B C D
A B C D E

*/
#include <stdio.h>

void print_pattern(int rows) {
    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print each character in the row
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);  // Print character 'A', 'B', 'C', etc.
        }
        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int num_rows = 5;  // Set the number of rows for the pattern

    // Call the function to print the pattern
    print_pattern(num_rows);

    return 0;
}
