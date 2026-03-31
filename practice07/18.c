#include <stdio.h>
#include <string.h>

int count_vowels(char str[]) {
    char *vowels = "aeiouAEIOU";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr(vowels, str[i]))
            count++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Введите строку: ");
    scanf("%s", str);

    int result = count_vowels(str);
    
    printf("Результат: %d\n", result);
    return 0;
}
