// Your code here...
#include <stdio.h>
int printPrimesInRange(int a, int b) {
    int PrimeFound=0;
    for (int i=a;i<=b;i++) {
        int k=0;
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                k++;
                break;
            }
        if (k==0 && i>1) {
            printf("%d ", i);
            PrimeFound=1;
            }
    if (!PrimeFound) {
        printf("Np prime numbers");
        }
            
        }
    }
}