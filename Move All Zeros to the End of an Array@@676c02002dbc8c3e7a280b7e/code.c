// Your code here...
#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        if(arr[i]==0) {
            count++;
        }
    }
    if (count==0) {
        for(int i=0; i<n; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        for (int i=0; i<n; i++) {
            if (arr[i]==0) {
                continue;
            }
            printf("%d ", arr[i]);
        }
        for (int i=0; i<count; i++) {
            printf("%d ", 0);
        }
    }
}