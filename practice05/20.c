#include <stdio.h>

int main() {
    int arr[] = {1, 8, 3, 9, 2, 7};
    int x = 5;
    int *p   = arr;
    int *end = arr + 6;
    int count = 0;

    while (p < end) {
        if (*p > x)
            count++;
        p++;
    }

    printf("%d\n", count);
}
