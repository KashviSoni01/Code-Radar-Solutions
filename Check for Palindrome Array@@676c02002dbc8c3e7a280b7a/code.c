// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int k=1;
    for(int j=0;j<n;j++){
        if(array[j]!=array[n-j-1]){
            k=0;
            break;
        }
    }
    if(k){printf("YES");}
    else{printf("NO");}
    return 0;
}