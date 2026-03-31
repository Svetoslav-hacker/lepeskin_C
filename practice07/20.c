#include <stdio.h>

int is_palindrome_str(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    char str[100];

    printf("Введите строку: ");
    scanf("%s", str);

    int result = is_palindrome_str(str);
    
    printf("Результат: %d\n", result);
    return 0;
}
