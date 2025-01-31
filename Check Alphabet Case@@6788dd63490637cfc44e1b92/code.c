#include <stdio.h>
int main() {
    char a[1];
    if (isupper(a)) {
        printf("Uppercase");
    }
    else if (islower(a)) {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
}