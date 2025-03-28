// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[1001]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[arr[i]]>0){
            printf("%d %d\n",arr[i],freq[arr[i]]);
            freq[arr[i]]=0;
        }
    }
}