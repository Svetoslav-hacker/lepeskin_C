#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    int n;
    printf("Введите количество студентов: ");
    scanf("%d", &n);

    Student *students = (Student*)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Студент %d:\n", i + 1);
        printf("  Имя: ");
        scanf("%49s", students[i].name);
        printf("  Возраст: ");
        scanf("%d", &students[i].age);
    }

    printf("\nСписок студентов:\n");
    for (int i = 0; i < n; i++)
        printf("  %s, %d лет\n", students[i].name, students[i].age);

    int oldest = 0;
    for (int i = 1; i < n; i++)
        if (students[i].age > students[oldest].age)
            oldest = i;

    printf("\nСамый старший: %s (%d лет)\n", students[oldest].name, students[oldest].age);

    free(students);
    students = NULL;
    return 0;
}
