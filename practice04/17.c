#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int indx = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[indx]) {
            indx = i;
        }
    }

    for (int i = indx + 1; i < n; i++) {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}