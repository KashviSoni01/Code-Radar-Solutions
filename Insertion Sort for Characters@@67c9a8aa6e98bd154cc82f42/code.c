// Your code here...
void insertionSort(char arr[], int n){
    for (int i=1;i<n;i++) {
        char current=arr[i];
        int previous=i-1;
        while(previous>=0 && arr[previous]>current) {
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=current;
    }
}
char printArray(int arr[], int n) {
    for (int i=0;i<n;i++) {
        printf("%c ", arr[i]);
    }
}