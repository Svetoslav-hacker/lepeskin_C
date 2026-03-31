#include <stdio.h>

int count_even(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
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
    int result = count_even(arr, n);
    printf("Результат: %d\n", result);
    return 0;
}
