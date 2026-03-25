#include <stdio.h>

int main() {
    int arr[] = {3, 7, -2, 5, -8};
    int *p   = arr;
    int *end = arr + 5;

    while (p < end) {
        if (*p < 0) {
            printf("%d\n", *p);
            break;
        }
        p++;
    }
}
