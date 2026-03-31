#include <stdio.h>

int find(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Введите число: ");
    scanf("%d", &x);
    int result = find(arr, n, x);
    printf("Результат: %d\n", result);
    return 0;
}
