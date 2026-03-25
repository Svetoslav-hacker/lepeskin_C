#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    int *end = arr + 5;

    while (p < end) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}
