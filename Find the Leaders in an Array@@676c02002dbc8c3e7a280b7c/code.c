// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    if(n==1) {
        printf("%d ", arr[0]);
    }
    else {
        for (int i=0; i<n-1; i++) {
            int isFound=1
            for (int j=i+1; i<n; i++) {
                if(arr[i]<arr[j]) {
                    isFound=0;
                    break;
                }
            }
        }
        if (isFound==1) {
            printf("%d ", arr[i]);
        }
        printf("%d ", arr[n-1]);
    }
    
}