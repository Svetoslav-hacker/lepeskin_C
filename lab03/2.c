#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);

    int *arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    printf("Элементы массива (calloc инициализирует нулями):\n");
    for (int i = 0; i < n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    free(arr);
    arr = NULL;
    return 0;
}
