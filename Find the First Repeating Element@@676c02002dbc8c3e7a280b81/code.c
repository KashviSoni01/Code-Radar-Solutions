// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; i++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int isFound=-1;
    for (int i=0; i<n-1; i++) {
        if(arr[i]==arr[i+1]) {
            isFound=arr[i];
            break;
        }
    }
    printf("%d", isFound);
}