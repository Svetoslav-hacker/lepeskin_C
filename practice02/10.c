#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int found = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            product *= i;
            found = 1;
        }
    }
    if (found) printf("%lld\n", product);
    else printf("No multiples of 3\n");
    return 0;
}
