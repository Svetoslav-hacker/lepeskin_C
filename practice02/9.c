#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        if (i % 4 != 0) printf("%d\n", i);
    }
    return 0;
}
