#include <stdio.h>

int main() {
    char str[] = "hello";
    char *p = str;

    while (*p != '\0') {
        printf("%c\n", *p);
        p++;
    }
}
