#include <stdio.h>

int contieneDigito(int numero, int digito) {
    while (numero != 0) {
        int d = numero % 10; 
        if (d == digito) {
            return 1; 
        }
        numero /= 10;
    }
}            