#include <stdio.h>

#define N 5

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main(void) {
    struct Student students[N] = {
        {"Анна Петрова", 19, 4.8},
        {"Борис Смирнов", 21, 3.6},
        {"Вера Козлова", 20, 4.2},
        {"Григорий Попов", 22, 3.9},
        {"Дарья Новикова", 18, 5.0},
    };

    printf("Список студентов:\n");
    for (int i = 0; i < N; i++) {
        printf("%d. %s, возраст %d, балл %.2f\n",
               i + 1, students[i].name, students[i].age, students[i].gpa);
    }

    int best = 0;
    for (int i = 1; i < N; i++) {
        if (students[i].gpa > students[best].gpa)
            best = i;
    }
    printf("\nЛучший студент: %s (%.2f)\n", students[best].name, students[best].gpa);

    return 0;
}
