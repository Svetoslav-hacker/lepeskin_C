#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 5};
    int *pa = a;
    int *pb = b;
    int *end = a + 5;
    int equal = 1;

    while (pa < end) {
        if (*pa != *pb) {
            equal = 0;
            break;
        }
        pa++;
        pb++;
    }

    if (equal)
        printf("массивы равны\n");
    else
        printf("массивы не равны\n");
}
