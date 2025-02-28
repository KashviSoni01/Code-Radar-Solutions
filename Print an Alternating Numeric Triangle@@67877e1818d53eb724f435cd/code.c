#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);  // Read the number of rows for the pattern
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            // If the sum of row and column indices (i + j) is even, print 1, otherwise print 0
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
