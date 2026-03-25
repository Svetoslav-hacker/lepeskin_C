#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "Hello World";
    char *p = s;
    char *vowels = "aeiouAEIOU";
    while (*p != '\0') {               
        if (strchr(vowels, *p))        
            *p = '*';                  
        p++;
    }
    printf("%s\n", s);
    return 0;
}