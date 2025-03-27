// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int isPalindrome=1;
    char a="No", b="YES";
    for (int i=0; i<n/2;i++) {
        if(arr[i]==arr[n-i-1]) {
            isPalindrome=1;
        } 
        else {
            return a;
        }   
    }
    return b;
}