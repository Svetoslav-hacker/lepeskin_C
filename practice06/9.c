#include <stdio.h>

int main() {
    char s[] = "book";
    char *p = s;
    int found = 0;
    while (*p != '\0' && *(p+1) != '\0') {  
        if (*p == *(p+1)) {                 
            found = 1;
            break;
        }
        p++;
    }
    printf(found ? "Да\n" : "Нет\n");
    return 0;
}