// Your code here...
#include <stdio.h>
int main() {
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int temp=-1;
    for (int i=0; i<n; i++) {
        if(arr[i]==k) {
            temp=i;
            break;
        }
    }
    printf("%d", temp);
}