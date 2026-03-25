#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 17 == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
