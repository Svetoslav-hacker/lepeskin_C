#include <stdio.h>

int main() {
    char s[] = "Hello";
    char *p = s;
    
    while (*p != '\0') {
        p++;
    }

    p--;                      
    while (p >= s) {          
        putchar(*p);
        p--;
    }
    putchar('\n');
    return 0;
}