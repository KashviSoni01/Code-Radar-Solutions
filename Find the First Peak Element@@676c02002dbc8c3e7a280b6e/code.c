#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // First check the first element (index 0)
    if (arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;  // Exit once we find a peak
    }

    // Then check the middle elements (1 to n-2)
    for (int j = 1; j < n - 1; j++) {
        if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) {
            printf("%d", arr[j]);
            return 0;  // Exit once we find a peak
        }
    }

    // Finally check the last element (index n-1)
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d", arr[n - 1]);
        return 0;
    }

    // If no peak is found
    printf("-1");

    return 0;
}
