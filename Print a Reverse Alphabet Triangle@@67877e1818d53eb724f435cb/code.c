// Your code here...
#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d", &n);
    for (i=1;i<=n;i++) {
        char a='A';
        for (j=n;j>=i;j--){
            printf("%c ", a);
            a++;
        }
        print("\n");
    }
}