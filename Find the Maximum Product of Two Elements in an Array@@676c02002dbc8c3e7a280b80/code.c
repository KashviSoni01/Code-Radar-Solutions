// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for( int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    int a=arr[n-1]*arr[n-2];
    int b=arr[0]*arr[1];
    if (a>b){
        printf("%d", a);
    }
    else {
        printf("%d", b);
    }
}
