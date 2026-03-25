#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x = i, digit_sum = 0;
        while (x > 0) {
            digit_sum += x % 10;
            x /= 10;
        }
        if (digit_sum > 10) printf("%d\n", i);
    }
    return 0;
}
