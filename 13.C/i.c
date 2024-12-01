/*
13.	Write programs to display each of the following patterns.
* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>

int main() {
    int i, j;

    // Loop to print rows
    for (i = 5; i >= 1; i--) {
        // Loop to print columns (stars)
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
