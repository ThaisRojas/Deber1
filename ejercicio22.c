#include <stdio.h>

int esMultiploDe5(int numero) {
    if (numero % 5 == 0) {
        return 1; 
    } else {
        return 0; 
    }
} 
int main() {
    int valor;

    printf("Ingrese un número entero: ");
    scanf("%d", &valor);
}
