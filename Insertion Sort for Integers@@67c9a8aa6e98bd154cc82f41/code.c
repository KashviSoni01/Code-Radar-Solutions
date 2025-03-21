// Your code here...
int insertionSort(int arr[], int n){
    for (int i=1;i<n;i++) {
        int current=i;
        int previous=i-1;
        while(previous>=0 && arr[previous]>current) {
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[preious+1]=current;
    }
}
int printArray(int arr[], int n) {
    for (int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
}