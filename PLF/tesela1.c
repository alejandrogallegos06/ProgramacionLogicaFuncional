#include <stdio.h>

void inter(int *a, int *b) {
    int aux = *b;
    *b = *a;
    *a = aux;
}

int main() {
    int a = 6, b = 5;
    
    // Le pasamos la dirección de memoria usando &
    inter(&a, &b); 
    
    printf("%d %d\n", a, b);
    
    return 0;
}