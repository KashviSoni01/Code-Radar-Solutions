// Your code here...
#include <stdio.h>
int main() {
    int n,k;
    int arr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", arr[i]);
    }
    scanf("%d", &k);
    for(int i=0; i<n; i++) {
        if(i+2<n) {
            i=i+k;
            printf("%d\n", arr[i]);
        }
        else {
            i=i+k-n;
            printf("%d\n", arr[i]);
        }
    }
}