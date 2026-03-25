#include <stdio.h>

int main() {
    int src[] = {10, 20, 30, 40, 50};
    int dst[5];
    int *ps = src;
    int *pd = dst;
    int *end = src + 5;

    while (ps < end) {
        *pd = *ps;
        ps++;
        pd++;
    }

    pd = dst;
    end = dst + 5;
    while (pd < end) {
        printf("%d ", *pd);
        pd++;
    }
    printf("\n");
}
