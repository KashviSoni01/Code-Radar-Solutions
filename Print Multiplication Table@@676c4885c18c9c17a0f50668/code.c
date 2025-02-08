#include <stdio.h>
int main() {
    int i;
    scanf("%d", &i);
    for(int j=1;j<=10;j++) {
        printf("5 x %d = %d\n", j, i*j);
    }
}