#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    int n = 3;

    p += 3;

    printf("%d\n", *p);
}
