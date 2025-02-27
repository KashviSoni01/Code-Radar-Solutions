#include <stdio.h>
int main() {
    int i, j, n;
    scanf("%d", &n);

    // Outer loop for each row
    for (i = 1; i <= n; i++) {
        // Inner loop for spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");  // Print spaces
        }
        
        // Inner loop for stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");  // Print stars
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}