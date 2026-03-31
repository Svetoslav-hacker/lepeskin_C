#include <stdio.h>

int count_char(char str[], char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            count++;
    }
    return count;
}

int main() {
    char str[100];
    char c;
    
    printf("Введите строку: ");
    scanf("%s", str);

    printf("Введите символ: ");
    scanf(" %c", &c);

    int result = count_char(str, c);

    printf("Результат: %d\n", result);
    return 0;
}
