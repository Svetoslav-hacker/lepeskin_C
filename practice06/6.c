#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "hello world";
    char *p = s;
    int idx = 0;
    while (*p != '\0') {
        if (*p == ' ') {                
            idx = 0;
            putchar(' ');
        } else {
            putchar(idx % 2 == 0        
                ? tolower(*p)
                : toupper(*p));         
            idx++;
        }
        p++;
    }
    putchar('\n');
    return 0;
}