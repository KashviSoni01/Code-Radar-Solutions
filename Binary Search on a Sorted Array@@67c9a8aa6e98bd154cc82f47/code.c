// Your code here...
#include 
int binarySearch(int arr[], int n; int trget) {
    int low,mid,high;
    low=0;
    high=n-1
    while(low<=high) {
        mid=low+high/2
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