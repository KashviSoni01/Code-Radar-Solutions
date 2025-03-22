#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<n; j++) {
        if (j==0) {
            if ( arr[0]>arr[1]) {
                printf("%d", arr[0]);
                break;
            }
        }
            else if {
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    printf("%d", arr[i]);
                    break;
                }
            }
            else if (j=n-1) {
                if(arr[j]>arr[j-1]) {
                    printf("%d", arr[j])
                    break;
                }
            }
            else {
                printf("-1");
            }

        }

    }
