#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int tmp = a[0];
    a[0] = a[n - 1];
    a[n - 1] = tmp;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}