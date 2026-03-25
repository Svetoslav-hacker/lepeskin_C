#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count++;
    }

    for(int i = 0; i < n; i++) {
        int sum += a[i];
    }

    printf(sum / count);
}