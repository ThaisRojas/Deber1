#include <stdio.h>

int contieneDigito(int numero, int digito) {
    while (numero != 0) {
        int d = numero % 10; 
        if (d == digito) {
            return 1; 
        }
        numero /= 10;
    }
    return 0;
}            
int main() {
    int numero, digito;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    printf("Ingrese un dígito a buscar: ");
    scanf("%d", &digito);

    if (contieneDigito(numero, digito)) {
        printf("%d contiene el dígito %d.\n", numero, digito);
    } else {
        printf("%d no contiene el dígito %d.\n", numero, digito);
    }

    return 0;
}