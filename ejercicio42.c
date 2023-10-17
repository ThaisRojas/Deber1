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
            if (matriz[i][j] == max) {
                contador++;
            }
        }
    }

    return contador;
}

int main() {
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int repeticiones = Maximo(matriz);

    printf("El valor máximo se repite %d veces en la matriz.\n", repeticiones);

    return 0;
}
