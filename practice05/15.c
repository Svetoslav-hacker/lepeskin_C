#include <stdio.h>

int main() {
    int arr[] = {3, 7, 1, 9, 2};
    int *left  = arr;
    int *right = arr + 4;
    int max = *left;

    while (left <= right) {
        if (*left > max)  max = *left;
        if (*right > max) max = *right;
        left++;
        right--;
    }

    printf("%d\n", max);
}
