// Your code here...
#include <stdio.h>
int fibonacciSeries(n) {
    int a=0,b=1;
    for(int i=1;i<=n;i++) {
        printf("%d", a);
        a=b;
        b=a+b;
    }
     }
int main() {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("Invalid input\n")
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}