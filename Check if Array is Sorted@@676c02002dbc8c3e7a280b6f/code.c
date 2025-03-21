// Your code here...
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    bool isSorted=true;
    for(int i=0; i<n; i++) {
        for (int j=0; j<n-1; j++) {
            if(arr[j]>arr[j+1]) {
                isSorted=false;
                break;
            }
        }
    }
    if (isSorted) {
        printf("Sorted");
    }
    else {
        printf("Not Sorted");
    }
}