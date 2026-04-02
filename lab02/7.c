#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

enum Course { COURSE_1 = 1, COURSE_2, COURSE_3, COURSE_4, COURSE_5 };

struct Student {
    char name[50];
    int age;
    enum Course course;
    float gpa;
};

void add_student(struct Student *arr, int *count,
                 const char *name, int age, enum Course course, float gpa) {
    if (*count >= MAX_STUDENTS) {
        printf("Массив заполнен\n");
        return;
    }
    struct Student *s = &arr[*count];
    strncpy(s->name, name, sizeof(s->name) - 1);
    s->name[sizeof(s->name) - 1] = '\0';
    s->age = age;
    s->course = course;
    s->gpa = gpa;
    (*count)++;
}

void print_students(const struct Student *arr, int count) {
    printf("%-25s %4s %6s %6s\n", "Имя", "Курс", "Возраст", "Балл");
    printf("%-25s %4s %6s %6s\n");
    for (int i = 0; i < count; i++) {
        printf("%-25s %4d %7d %6.2f\n",
               arr[i].name, arr[i].course, arr[i].age, arr[i].gpa);
    }
}

const struct Student *find_by_name(const struct Student *arr, int count,
                                   const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(arr[i].name, name) == 0)
            return &arr[i];
    }
    return NULL;
}

void sort_by_gpa(struct Student *arr, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr[j].gpa > arr[i].gpa) {
                struct Student tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(void) {
    struct Student students[MAX_STUDENTS];
    int count = 0;

    add_student(students, &count, "Анна Петрова", 19, COURSE_2, 4.8f);
    add_student(students, &count, "Борис Смирнов", 21, COURSE_3, 3.6f);
    add_student(students, &count, "Вера Козлова", 20, COURSE_2, 4.2f);
    add_student(students, &count, "Григорий Попов", 22, COURSE_4, 3.9f);
    add_student(students, &count, "Дарья Новикова", 18, COURSE_1, 5.0f);

    printf("Исходный список\n");
    print_students(students, count);

    const char *target = "Вера Козлова";
    const struct Student *found = find_by_name(students, count, target);
    printf("\nПоиск: \"%s\"n", target);
    if (found)
        printf("Найден: %s, курс %d, балл %.2f\n",
               found->name, found->course, found->gpa);
    else
        printf("Не найден\n");

    sort_by_gpa(students, count);
    printf("\nОтсортировано по баллу (убывание)\n");
    print_students(students, count);

    return 0;
}
