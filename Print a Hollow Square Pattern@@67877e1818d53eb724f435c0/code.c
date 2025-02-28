// Your code here...
// #include <stdio.h>
// int main() {
//     int i,j,n;
//     scanf("%d", &n);
//     for(i=1;i<=n;i++) {
//         if (i==1 || i==n) {
//             for (j=1;j<=n;j++) {
//                 printf("*");
//             }
//         }
//         else {
//             for (j=1;j<=n;j++) {
//                 if (j==1|| j==n) {
//                     printf("*");
//                 }
//                 else {
//                     printf(" ");
//                 }
//             }
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);  // Input the size of the square/rectangle
    
    // Outer loop for each row
    for (i = 1; i <= n; i++) {
        // If it's the first or last row, print a full line of stars
        if (i == 1 || i == n) {
            for (j = 1; j <= n; j++) {
                printf("*");
            }
        } 
        // For middle rows, print stars only on the borders
        else {
            printf("*");  // Print the first star in the row
            for (j = 2; j < n; j++) {
                printf(" ");  // Print spaces for the hollow part
            }
            if (n > 1) {  // Print the last star (only if n > 1)
                printf("*");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
