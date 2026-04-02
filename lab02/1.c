#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main(void) {
    struct Student s1 = {"Иван Иванов", 20, 4.5};

    printf("Имя: %s\n", s1.name);
    printf("Возраст: %d\n", s1.age);
    printf("Средний балл: %.2f\n", s1.gpa);

    struct Student s2;
    printf("\nВведите имя: ");
    scanf(" %[^\n]", s2.name);
    printf("Введите возраст: ");
    scanf("%d", &s2.age);
    printf("Введите средний балл: ");
    scanf("%f", &s2.gpa);

    printf("\nИмя: %s\n", s2.name);
    printf("Возраст: %d\n", s2.age);
    printf("Средний балл: %.2f\n", s2.gpa);

    return 0;
}
