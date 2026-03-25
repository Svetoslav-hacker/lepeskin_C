#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *left  = arr;
    int *right = arr + 4;

    while (left < right) {
        int tmp = *left;
        *left   = *right;
        *right  = tmp;
        left++;
        right--;
    }

    int *p = arr;
    int *end = arr + 5;
    while (p < end) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}
