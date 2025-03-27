// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int count=0;
    int count1=0;
    for (int i=0; i<n; i++) {
        for(int j=2; j<i; j++) {
            if (i%j==0) {
                count+=1;
                }
        }
        if (count>0) {
            count1++;
        }
    }
    if (count1>0) {
        printf("%d", count1);
    }
    else {
        printf("%d", -1);
    }
}