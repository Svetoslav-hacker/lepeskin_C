#include <stdio.h>

int main() {
    int    *pi = NULL;
    double *pd = NULL;
    char   *pc = NULL;

    printf("%zu\n", sizeof(pi));
    printf("%zu\n", sizeof(pd));
    printf("%zu\n", sizeof(pc));
}