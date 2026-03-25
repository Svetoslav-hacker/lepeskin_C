#include <stdio.h> 

int main() {
    int a = 10;
    int  *p  = &a;
    int **pp = &p;
    **pp = 77;          
    
    printf("%d\n", a);
}