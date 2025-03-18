// Your code here...
#include <stdio.h>
int printPrimesInRange(int a, int b) {
    int PrimeFound=0;
    for (int i=a;i<=b;i++) {
        int k=0;
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                k++;
                break;
            }
        }
       if (k==0 && i>1) {
            printf("%d ", i);
            PrimeFound=1;
            }
    }
    if (!PrimeFound) {
        printf("No prime numbers");
        }
            
        }

// #include <stdio.h>

// int printPrimesInRange(int a, int b) {
//     int PrimeFound = 0;  // Flag to track if any prime numbers are found

//     for (int i = a; i <= b; i++) {
//         int k = 0;  // Reset k for each number to check if it's divisible
//         for (int j = 2; j < i; j++) {
//             if (i % j == 0) {
//                 k++;  // If divisible, set k to 1
//                 break;  // Break out of the loop as it's not a prime
//             }
//         }
        
//         if (k == 0 && i > 1) {  // If k is 0, i is prime (and i > 1)
//             printf("%d ", i);  // Print the prime number
//             PrimeFound = 1;  // Set the flag that a prime is found
//         }
//     }

//     if (!PrimeFound) {  // If no primes were found, print the message
//         printf("No prime numbers\n");
//     } 
//     return 0;
// }
