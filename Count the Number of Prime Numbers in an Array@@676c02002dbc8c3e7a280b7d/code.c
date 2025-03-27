// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array
    int arr[n];  // Declare an array of size n

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count1 = 0;  // This will count how many non-prime numbers there are

    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        int num = arr[i];  // Get the current number to check for primality
        int count = 0;  // Reset count for each number

        // If the number is less than 2, it's neither prime nor composite, so skip it
        if (num < 2) {
            continue;
        }

        // Check if the number is prime
        for (int j = 2; j * j <= num; j++) {  // Only check up to sqrt(num)
            if (num % j == 0) {
                count = 1;  // The number is divisible by j, so it's non-prime
                break;
            }
        }

        // If count is 1, it means it's non-prime (composite)
        if (count == 1) {
            count1++;  // Increment the non-prime count
        }
    }

    // Output the result
    if (count1 > 0) {
        printf("%d", count1);  // Print the number of non-prime numbers
    } else {
        printf("-1");  // If no non-prime numbers are found, print -1
    }

    return 0;
}
