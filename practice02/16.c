#include <stdio.h>

int main() {
    int x, count = 0;
    scanf("%d", &x);
    while (x != 0) {
        count++;
        scanf("%d", &x);
    }
    printf("%d\n", count);
    return 0;
}
