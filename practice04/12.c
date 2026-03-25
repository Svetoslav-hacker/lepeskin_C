#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            idx = i;
            break;
        }
    }

    printf("%d\n", idx);

    return 0;
}