#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "abc123";
    char *p = s;
    int has_digit = 0, has_alpha = 0;
    while (*p != '\0') {
        if (isdigit(*p)) has_digit = 1;  
        if (isalpha(*p)) has_alpha = 1;
        p++;
    }
    printf(has_digit && has_alpha ? "OK\n" : "Слабый пароль\n");
    return 0;
}