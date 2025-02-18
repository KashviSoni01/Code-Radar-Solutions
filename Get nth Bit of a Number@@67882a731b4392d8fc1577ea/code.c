// Your code here...
#include <stdio.h>

// Function to get the nth bit of a number
int getNthBit(int num, int n) {
    // Shift the number right by n positions and then perform a bitwise AND with 1
    return (num >> n) & 1;
}

int main() {
    int num = 29;  // Example number (in binary: 11101)
    int n = 3;     // Position of the bit to check (0-based index)

    int bit = getNthBit(num, n);

    printf("%d\n", bit);
    return 0;
}