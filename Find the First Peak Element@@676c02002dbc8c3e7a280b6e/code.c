#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Check the first element: it is a peak if it is greater than the second element
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return 0;  // Return after printing the first peak
    }

    // Check the last element: it is a peak if it is greater than the second to last element
    if (arr[N - 1] > arr[N - 2]) {
        printf("%d\n", arr[N - 1]);
        return 0;  // Return after printing the first peak
    }

    // Check the middle elements
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);  // Print the first peak found
            return 0;  // Return after printing the first peak
        }
    }

    // If no peak is found
    printf("-1\n");
    return 0;
}
