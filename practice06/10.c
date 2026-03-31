#include <stdio.h>

int main() {
    char s[] = "Hello!";
    char *p = s;
    int len = 0;
    while (*p++) len++;        
    int half = len / 2;
    char *mid = s + half;      
    char *a = s;
    printf("Первая: ");
    while (a < mid) putchar(*a++);    
    printf("\nВторая: ");
    while (*mid) putchar(*mid++);     
    putchar('\n');
    return 0;
}
