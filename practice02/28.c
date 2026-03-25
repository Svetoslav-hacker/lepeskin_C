#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, has3 = 0;
        while (x > 0) {
            if (x % 10 == 3) { has3 = 1; break; }
            x /= 10;
        }
        if (!has3) printf("%d\n", i);
    }
    return 0;
}
