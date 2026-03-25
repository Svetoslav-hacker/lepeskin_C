#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    double avg = (double)sum / n;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > avg) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    
    return 0;
}