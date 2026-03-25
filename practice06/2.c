#include <stdio.h>

int main() {
    char s[] = "Hello";
    int len = 0;
    for (int i = 0; s[i]; i++) {  
        len++;                     
    }
    printf("Length: %d\n", len);
    return 0;
}