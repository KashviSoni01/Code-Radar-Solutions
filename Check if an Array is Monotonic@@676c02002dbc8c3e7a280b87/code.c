// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];  
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int isAscending = 1;  
    int isDescending = 1;  
    for(int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            isAscending = 0;  
        }
        if (arr[i] < arr[i+1]) {
            isDescending = 0; 
        }
    }
    if (isAscending || isDescending) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
