#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Введите начальный размер массива: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Введите элементы:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Исходный массив: ");
    print_array(arr, n);

    int m;
    printf("Введите новый размер (увеличение): ");
    scanf("%d", &m);

    int *tmp = (int*)realloc(arr, m * sizeof(int));
    if (tmp == NULL) {
        printf("Ошибка realloc\n");
        free(arr);
        return 1;
    }
    arr = tmp;

    printf("Введите новые элементы:\n");
    for (int i = n; i < m; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Массив после увеличения: ");
    print_array(arr, m);

    int k;
    printf("Введите новый размер (уменьшение): ");
    scanf("%d", &k);

    tmp = (int*)realloc(arr, k * sizeof(int));
    if (tmp == NULL) {
        printf("Ошибка realloc\n");
        free(arr);
        return 1;
    }
    arr = tmp;

    printf("Массив после уменьшения: ");
    print_array(arr, k);

    free(arr);
    arr = NULL;
    return 0;
}
