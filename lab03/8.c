#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
} List;

void add_element(List *list) {
    int val;
    printf("Введите элемент: ");
    scanf("%d", &val);

    int *tmp = (int*)realloc(list->data, (list->size + 1) * sizeof(int));
    if (tmp == NULL) {
        printf("Ошибка выделения памяти\n");
        return;
    }
    list->data = tmp;
    list->data[list->size] = val;
    list->size++;
    printf("Элемент добавлен\n");
}

void delete_element(List *list) {
    if (list->size == 0) {
        printf("Список пуст\n");
        return;
    }
    int idx;
    printf("Введите индекс (0-%d): ", list->size - 1);
    scanf("%d", &idx);

    if (idx < 0 || idx >= list->size) {
        printf("Неверный индекс\n");
        return;
    }

    for (int i = idx; i < list->size - 1; i++)
        list->data[i] = list->data[i + 1];

    list->size--;
    int *tmp = (int*)realloc(list->data, list->size * sizeof(int));
    if (tmp != NULL || list->size == 0)
        list->data = tmp;

    printf("Элемент удалён\n");
}

void print_list(List *list) {
    if (list->size == 0) {
        printf("Список пуст\n");
        return;
    }
    printf("Список (%d эл.): ", list->size);
    for (int i = 0; i < list->size; i++)
        printf("%d ", list->data[i]);
    printf("\n");
}

void resize_list(List *list) {
    int new_size;
    printf("Введите новый размер: ");
    scanf("%d", &new_size);

    int *tmp = (int*)realloc(list->data, new_size * sizeof(int));
    if (tmp == NULL && new_size > 0) {
        printf("Ошибка выделения памяти\n");
        return;
    }
    list->data = tmp;
    list->size = new_size;
    printf("Размер изменён на %d\n", new_size);
}

void exit_program(List *list) {
    free(list->data);
    list->data = NULL;
    printf("Выход\n");
    exit(0);
}

int main() {
    List list = {NULL, 0};

    void (*actions[])(List*) = {
        add_element,
        delete_element,
        print_list,
        resize_list,
        exit_program
    };

    while (1) {
        printf("\n1. Добавить элемент\n");
        printf("2. Удалить элемент\n");
        printf("3. Вывести список\n");
        printf("4. Изменить размер\n");
        printf("5. Выход\n");
        printf("Выбор: ");

        int choice;
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
            actions[choice - 1](&list);
        else
            printf("Неверный выбор\n");
    }

    return 0;
}
