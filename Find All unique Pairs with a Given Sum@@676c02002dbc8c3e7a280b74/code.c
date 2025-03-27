// Your code here...
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int t;
    scanf("%d", &t);
    int same=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[0]){
            same=0;
            break;
        }
    }
    if(same){
        if(arr[0]+arr[1]==t){
            printf("%d %d\n",array[0],array[1]);
        }
    }
    else {
        for (int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j]==t) {
                printf("%d %d\n", arr[i], arr[j]);
                break;
            }
        }
    }
    }
}