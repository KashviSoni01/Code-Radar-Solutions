#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf("%c", &a);
    a=tolower(a);
    if (a>='a' && a<='z') {
        if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u') {
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    else if (a>='0' && a<='9') {
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
}