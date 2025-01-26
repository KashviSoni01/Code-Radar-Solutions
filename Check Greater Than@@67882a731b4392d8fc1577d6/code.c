#include <stdio.h>
int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>=0 && b>=0) {
        if (a>=b) {
        printf("True");
        }
        else {
            printf("False");
        }
    }
    else {
        if a>=b {
            printf("False");
        }
        else {
            printf("True");
        }
    }
}