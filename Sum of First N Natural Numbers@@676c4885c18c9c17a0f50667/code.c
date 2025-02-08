#include <stdio.h>
int main() {
    int i,sum=0;
    scanf("%d", &i);
    for (int j=1; j<=i; j++) {
        sum+=j;
    }
    printf("%d", sum);
}