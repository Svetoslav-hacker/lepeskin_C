#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *pa = &a, *pb = &b;
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    
    printf("%d %d\n", a, b);
}