// Your code here...
#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=n-i;j++) {
            printf(" ");
        }
        int k=1;
        for (j=1;j<=i;j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}