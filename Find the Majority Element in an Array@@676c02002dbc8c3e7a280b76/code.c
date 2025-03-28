// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);  // Read the size of the array
    
    int arr[n];  // Declare the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element of the array
    }

    // Loop through the array and check for majority element
    for(int i = 0; i < n; i++) {
        int count = 0;
        
        // Count the occurrences of arr[i] in the array
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }

        // If the count of the element exceeds n/2, it's the majority element
        if(count > n / 2) {
            printf("%d", arr[i]);  // Print the majority element
            return 0;  // Exit the program
        }
    }

    // If no majority element was found, print -1
    printf("-1");
    return 0;
}
