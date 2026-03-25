#include <stdio.h>

int main() {
    int a = 55;
    int  *p  = &a;   
    int **pp = &p;   
    printf("%d\n", **pp);  
}