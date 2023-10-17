#include <stdio.h>

int UltimosDigitos(int numero) {
    return numero % 100; 
}

int main() {
    int numero, resultado;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    resultado = UltimosDigitos(numero);
}