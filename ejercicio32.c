#include <stdio.h>

    
int ValorVector(int vector[], int valor, int longitud) {
    for (int i = 0; i < longitud; i++) {
        if (vector[i] == valor) {
            return 1; 
        }
    }
    return 0;
}
int main() {  
    int vector[10] = {3, 7, 2, 8, 1, 5, 6, 9, 4, 10};
    int valorBuscado = 5;

    int resultado = ValorVector(vector, valorBuscado, 10);

    if (resultado == 1) {
        printf("El valor %d se encuentra en el vector.\n", valorBuscado);
    } else {
        printf("El valor %d no se encuentra en el vector.\n", valorBuscado);
    }

    return 0;
}
        