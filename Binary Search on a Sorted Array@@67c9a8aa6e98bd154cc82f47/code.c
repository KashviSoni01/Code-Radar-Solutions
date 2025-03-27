// Your code here...
#include <stdio.h>
int binarySearch(int arr[], int n, int target) {
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high) {
        mid=low+high/2;
        if (arr[mid]==target) {
            return mid;
        }
        else if (arr[mid]<target) {
            low=mid+1;
        }
        else {
            low=mid-1;
        }
     }

}