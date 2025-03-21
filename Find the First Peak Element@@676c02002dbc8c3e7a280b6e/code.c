// Your code here...
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[N]);
    }
    for(int j=0; j<n; j++) {
        for(int k=0; k<n; k++) {
            if (k==0) {
                if(arr[k]>arr[k+1]) {
                    printf("%d", arr[k]);
                }
            }
            else if (k==n-1) {
                if(arr[k]>arr[k-1]) {
                    printf("%d", arr[k]);
                }
            }
            else if (1<k<n-2){
                if (arr[k]>arr[k-1] && arr[k]>arr[k+1]) {
                    printf("%d", arr[k]);
                }
            }
            else {
                pritnf("-1");
            }
            }
        }
    }
}