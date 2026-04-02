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

    int idx;
    printf("Введите индекс удаляемого элемента (0-%d): ", n - 1);
    scanf("%d", &idx);

    if (idx < 0 || idx >= n) {
        printf("Неверный индекс\n");
        free(arr);
        return 1;
    }

    for (int i = idx; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
    int *tmp = (int*)realloc(arr, n * sizeof(int));
    if (tmp != NULL)
        arr = tmp;

    printf("Массив после удаления: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    arr = NULL;
    return 0;
}
