#include <stdio.h>

int main() {
    int a = 1;
    int *p = &a;

    *p = 99;

    printf("%d\n", *p);
}