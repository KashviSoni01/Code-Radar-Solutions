// Your code here...
#include <stdio.h>

// Function to get the nth bit of a number
int getNthBit(int num, int n) {
    // Shift the number right by n positions and then perform a bitwise AND with 1
    return (num >> n) & 1;
}

int main() {
    int num,n;
    scanf("%d", &n);

    int bit = getNthBit(num, n);

    printf("%d\n", bit);
    return 0;
}