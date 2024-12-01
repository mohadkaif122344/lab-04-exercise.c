/*
13.	Write programs to display each of the following patterns.
1
1 2 3
1 2 3 4 5
1 2 3
1

*/
#include <stdio.h>

int main() {
    // First row
    printf("1\n");
    
    // Second row
    for (int i = 1; i <= 3; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Third row
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Fourth row
    for (int i = 1; i <= 3; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Fifth row
    printf("1\n");

    return 0;
}
