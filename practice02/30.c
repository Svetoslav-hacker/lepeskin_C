#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j > 50) continue;
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("------------------------------------\n");
    }
    return 0;
}
