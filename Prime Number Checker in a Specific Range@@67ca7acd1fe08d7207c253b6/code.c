// Your code here...
int printPrimesInRange(int a, int b) {
    int k=0;
    for (int i=a;i<=b;i++) {
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                k++;
            }
            if (k!>0) {
                printf("%d", i);
            }
            
        }
    }
}