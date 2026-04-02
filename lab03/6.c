#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите размер массива: ");
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

    int pos, val;
    printf("Введите позицию вставки (0-%d): ", n);
    scanf("%d", &pos);
    printf("Введите значение: ");
    scanf("%d", &val);

    if (pos < 0 || pos > n) {
        printf("Неверная позиция\n");
        free(arr);
        return 1;
    }

    int *tmp = (int*)realloc(arr, (n + 1) * sizeof(int));
    if (tmp == NULL) {
        printf("Ошибка realloc\n");
        free(arr);
        return 1;
    }
    arr = tmp;

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    printf("Массив после вставки: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    arr = NULL;
    return 0;
}
