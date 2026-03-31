#include <stdio.h>

int my_strlen(char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int main() {
    char str[100];

    printf("Введите строку: ");
    scanf("%s", str);

    int result = my_strlen(str);
    
    printf("Результат: %d\n", result);
    return 0;
}
