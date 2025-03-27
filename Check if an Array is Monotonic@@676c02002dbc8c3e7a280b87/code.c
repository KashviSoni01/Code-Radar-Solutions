// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array
    int arr[n];  // Declare an array of size n
    
    // Input the elements of the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int isAscending = 1;  // Flag to check if array is sorted in ascending order
    int isDescending = 1;  // Flag to check if array is sorted in descending order
    
    // Loop to check both ascending and descending order
    for(int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            isAscending = 0;  // Not ascending
        }
        if (arr[i] < arr[i+1]) {
            isDescending = 0;  // Not descending
        }
    }
    
    // If the array is either ascending or descending, print YES
    if (isAscending || isDescending) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
