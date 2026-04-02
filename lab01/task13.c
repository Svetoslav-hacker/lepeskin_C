#include <stdio.h>

int main() {
    int seconds;

    printf("Введите количество секунд с начала суток: ");
    scanf("%d", &seconds);

    int hh = seconds / 3600;
    int mm = (seconds % 3600) / 60;
    int ss = seconds % 60;

    printf("Время: %02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
