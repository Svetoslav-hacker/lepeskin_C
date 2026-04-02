#include <stdio.h>

union Data {
    int   i;
    float f;
    char  c;
};

enum DataType { TYPE_INT, TYPE_FLOAT, TYPE_CHAR };

struct TypedData {
    union Data value;
    enum DataType type;
};

void print_typed(const struct TypedData *td) {
    switch (td->type) {
        case TYPE_INT:   printf("int: %d\n",  td->value.i); break;
        case TYPE_FLOAT: printf("float: %.2f\n", td->value.f); break;
        case TYPE_CHAR:  printf("char:'%c'\n", td->value.c); break;
    }
}

int main(void) {
    union Data d;

    d.i = 42;
    printf("Записали int %d\n", d.i);

    d.f = 3.14f;
    printf("Записали float %.2f, int теперь = %d (мусор)\n", d.f, d.i);

    d.c = 'A';
    printf("Записали char '%c', float теперь = %.2f (мусор)\n", d.c, d.f);

    printf("\nРазмер union: %zu байт\n", sizeof(union Data));

    printf("\nСтруктура с тегом типа:\n");
    struct TypedData a = { .value.i = 100,   .type = TYPE_INT   };
    struct TypedData b = { .value.f = 2.71f, .type = TYPE_FLOAT };
    struct TypedData c = { .value.c = 'Z',   .type = TYPE_CHAR  };
    print_typed(&a);
    print_typed(&b);
    print_typed(&c);

    return 0;
}
