#include <stdio.h>

struct Rectangle {
    double width;
    double height;
};

double area_by_value(struct Rectangle r) {
    return r.width * r.height;
}

double perimeter_by_value(struct Rectangle r) {
    return 2.0 * (r.width + r.height);
}

double area_by_ptr(const struct Rectangle *r) {
    return r->width * r->height;
}

double perimeter_by_ptr(const struct Rectangle *r) {
    return 2.0 * (r->width + r->height);
}

int main(void) {
    struct Rectangle rect = {5.0, 3.0};

    printf("Прямоугольник: %.1f x %.1f\n", rect.width, rect.height);
    printf("Площадь (по значению):   %.2f\n", area_by_value(rect));
    printf("Периметр (по значению):  %.2f\n", perimeter_by_value(rect));
    printf("Площадь (по указателю):  %.2f\n", area_by_ptr(&rect));
    printf("Периметр (по указателю): %.2f\n", perimeter_by_ptr(&rect));

    return 0;
}
