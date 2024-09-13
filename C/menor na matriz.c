#include <stdio.h>
  

    int main() {
        
        int matriz[4][5] = {
        {5,4,2,8,7},
        {3,6,9,1,4},
        {0,3,5,2,9},
        {4,9,7,6,2}};

        int menor_valores[4];

        for (int i = 0; i < 4; i++) {
            int menor_valor = matriz[i][0];

            for (int j = 0; j < 5; j++) {
                if (matriz[i][j] < menor_valor) {
                    menor_valor = matriz[i][j];
                }
            }

            menor_valores[i] = menor_valor;
        }

        printf("Menores valores de cada linha:\n");
        for (int i = 0; i < 4; i++) {
            printf("Linha %d: %d\n", i + 1, menor_valores[i]);
        }

        return 0;
    }
