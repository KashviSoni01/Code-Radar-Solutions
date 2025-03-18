// Your code here...
#include <stdio.h>
int isPrime(int num) {
    int k=0;
    for(int i=2; i<num; i++) {
        if (num%i==0) {
            k++;
            break;
        }
    if (k==0) {
        printf("%d", num);
    }

    }
}