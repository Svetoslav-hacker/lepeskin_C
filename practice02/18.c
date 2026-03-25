#include <stdio.h>

int main() {
    int n, x, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 7 == 0) count++;
    }
    printf("%d\n", count);
    return 0;
}
