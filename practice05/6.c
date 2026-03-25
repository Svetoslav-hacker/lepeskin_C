#include <stdio.h>

int main() {
    int a = 33;
    int *p1 = &a;
    int *p2 = p1;  
    
    printf("%d %d\n", *p1, *p2);
}