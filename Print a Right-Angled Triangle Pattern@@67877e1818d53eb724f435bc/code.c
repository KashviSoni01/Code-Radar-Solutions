#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    while(a>0) {
        for(int i=a; i<0; i--) {
            printf("* ");
        
        }
        printf("\n");
        a--;
    }
}