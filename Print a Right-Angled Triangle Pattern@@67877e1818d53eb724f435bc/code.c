#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    while(a>0) {
        for(int i=1; i<a; i++) {
            printf("* ");
        
        }
        printf("\n");
        a--;
    }
}