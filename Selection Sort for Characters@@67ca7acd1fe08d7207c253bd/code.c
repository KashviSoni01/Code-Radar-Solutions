// Your code here...
void selectionSort(char arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallestIndex=i;
        for (int j=i+1;j<n;j++) {
            if (arr[j]<arr[smallestIndex]) {
                smallestIndex=j;
            }
        }
        char temp=arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;
    }
}
char printArray(char arr[], int n) {
    for(int i=0; i<n;i++){
        printf("%c ", arr[i]);
    }
}