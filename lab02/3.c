#include <stdio.h>

#define N 4

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birth;
};

void print_person(struct Person p) {
    printf("%s, дата рождения: %02d.%02d.%d\n",
           p.name, p.birth.day, p.birth.month, p.birth.year);
}

int main(void) {
    struct Person people[N] = {
        {"Алексей Морозов", {15, 3, 1998}},
        {"Елена Волкова", {7,  11, 2001}},
        {"Сергей Лебедев", {22, 6,  2003}},
        {"Мария Соколова", {1,  1,  1995}},
    };

    printf("Все персоны:\n");
    for (int i = 0; i < N; i++)
        print_person(people[i]);

    printf("\nРождённые после 2000 года:\n");
    for (int i = 0; i < N; i++) {
        if (people[i].birth.year > 2000)
            print_person(people[i]);
    }

    return 0;
}
