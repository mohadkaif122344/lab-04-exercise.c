/*
13.	Write programs to display each of the following patterns.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/
#include <stdio.h>

int main() {
    int i, j;

    // Loop to control rows
    for (i = 1; i <= 5; i++) {
        // Loop to control columns (numbers in each row)
        for (j = 1; j <= i; j++) {
            printf("%d ", i);  // Print the current row number
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

