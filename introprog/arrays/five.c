#include <stdio.h>

/*
Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/

int main(void){
    int len, contador = 0;

    scanf("%d", &len);

    int matrix[len][len];

    for (int i = 0; i < len; ++i){
        for (int j = 0; j < len; ++j){
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] > 10){
                contador++;    
            }
        }
    }

    printf("Maior que 10: %d.\n", contador);

    return 0;
}