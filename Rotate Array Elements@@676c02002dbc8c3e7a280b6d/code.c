#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // Handling case where k > n (to avoid unnecessary full rotations)
    k = k % n;

    // Create a temporary array to store the rotated version
    int temp[n];
    
    // Step 1: Copy the last k elements to the start of the temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Copy the first n-k elements to the end of the temp array
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    // Step 3: Copy the rotated array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);

    // Call function to rotate the array
    rotateArray(arr, n, k);
    
    // Output the rotated array
    printArray(arr, n);
    
    return 0;
}
