#include <stdio.h>

    
int ValorVector(int vector[], int valor, int longitud) {
    for (int i = 0; i < longitud; i++) {
        if (vector[i] == valor) {
            return 1; 
        }
    }
}
        