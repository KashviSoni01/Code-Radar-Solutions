// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    int a=(n/2);
    int b=(n/2)+1;
    if (n%2==0) {
        printf("%d", arr[a]+arr[b]);
    }
    else {
        printf("%d", arr[a]);
    }
}