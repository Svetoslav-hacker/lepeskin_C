#include <stdio.h>

int main() {
    int n; 
    int sum = 0;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 0; i++) {
        sum += a[i];
    } 

    printf("%d\n", sum);

    return 0;
}