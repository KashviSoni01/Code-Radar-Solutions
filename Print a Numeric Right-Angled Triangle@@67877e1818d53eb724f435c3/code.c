#include <stdio.h>
int main() {
    int j=1,k=1,a;
    scanf("%d", &a);
    while(a>0) {
        for(int i=1; i<=j; i++) {
            printf("%d ", k);
            k++;
        
        }
        printf("\n");
        k=0;
        j++;
        a--;
    }
}