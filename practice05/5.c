#include <stdio.h>

int main() {
    int a = 5;
    int *p1 = &a;
    int *p2 = &a; 
    if (p1 == p2)
        printf("одинаковые адреса\n");
    else
        printf("разные адреса\n");
}