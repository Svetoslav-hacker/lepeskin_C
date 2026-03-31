#include <stdio.h>
#include <ctype.h>

void to_upper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[100];
    printf("Введите строку: ");
    scanf("%s", str);

    to_upper(str);
    
    printf("Результат: %s\n", str);
    return 0;
}
