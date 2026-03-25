#include <stdio.h>

int main() {
    char s[] = "Hey!!! Stop!!! Now!!!";
    char *p = s;
    int count = 0;
    while (*p != '\0') {          
        if (*p == '!') count++;   
        p++;
    }
    if (count > 3)
        printf("STOP\n");
    else
        printf("OK\n");
    return 0;
}