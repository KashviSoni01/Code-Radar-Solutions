#include <stdio.h>
int main() {
    int i,k=1;
    scanf("%d", &i);
    while (i>0) {
        for(int j=1;j<=i;j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
        k=1;
        i--;
    }
}