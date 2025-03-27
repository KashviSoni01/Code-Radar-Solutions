// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int k=0;
    for (int i=0; i<n; i++) {
        int notprime=0;
        for(int j=2; j<i; j++) {
            if (i%j==0) {
                notprime=1;
                }
        }
        if(!notprime) {
            k++;
        }
    }
    printf("%d", k)
}