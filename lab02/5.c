#include <stdio.h>

enum Day {
    MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};

const char *day_name(enum Day d) {
    switch (d) {
        case MONDAY:    return "Понедельник";
        case TUESDAY:   return "Вторник";
        case WEDNESDAY: return "Среда";
        case THURSDAY:  return "Четверг";
        case FRIDAY:    return "Пятница";
        case SATURDAY:  return "Суббота";
        case SUNDAY:    return "Воскресенье";
        default:        return "Неизвестный день";
    }
}

struct Meeting {
    char title[60];
    enum Day day;
    int hour;
};

int main(void) {
    enum Day today = WEDNESDAY;
    printf("Сегодня: %s (значение %d)\n", day_name(today), today);

    struct Meeting m = {"Лекция по C", FRIDAY, 10};
    printf("Встреча: \"%s\" — %s в %d:00\n",
           m.title, day_name(m.day), m.hour);

    return 0;
}
