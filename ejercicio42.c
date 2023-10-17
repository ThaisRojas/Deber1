#include <stdio.h>

int Maximo(int matriz[3][4]) {
    int max = matriz[0][0];
    int contador = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == maximo) {
                contador++;
            }
        }
    }

    return contador;
}
