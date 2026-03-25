#include <stdio.h>

int main() {
    char s[] = "Hello, world!";
    char *p = s;
    while (*p != '\0') {
        putchar(*p);
        p++;
    }
    putchar('\n');
    return 0;
}