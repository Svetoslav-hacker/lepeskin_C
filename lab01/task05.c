#include <stdio.h>

int main() {
    int a = 5;
    printf("Начальное значение: a = %d\n", a);

    printf("a++ = %d\n", a++);   /* выводит 5, потом a становится 6 */
    printf("a после a++: %d\n", a);

    printf("++a = %d\n", ++a);   /* a становится 7, выводит 7 */
    printf("a после ++a: %d\n", a);

    printf("a-- = %d\n", a--);   /* выводит 7, потом a становится 6 */
    printf("a после a--: %d\n", a);

    printf("--a = %d\n", --a);   /* a становится 5, выводит 5 */
    printf("a после --a: %d\n", a);

    return 0;
}
