#include <stdio.h>

/*
Leia uma matriz 5 x 5. Leia tambem um valor X. O programa devera fazer uma busca
desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma
mensagem de “nao encontrado”.
*/

int main(void){
    int len, x, flag_notfound = 1, arr_index[2];

    printf("Len.: "); scanf("%d", &len);
    printf("X: "); scanf("%d", &x);

    int matrix[len][len];
    for (int i = 0; i < len; ++i){
        for (int j = 0; j < len; ++j){
            printf("m[%d][%d]: ", i, j); scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == x){
                arr_index[0] = i;
                arr_index[1] = j;
                flag_notfound = 0;
            }
        }
    }
    
    if (flag_notfound){
        printf("not found.\n");
    } else {
        printf("matrix[%d][%d]: %d.\n", arr_index[0], arr_index[1], matrix[arr_index[0]][arr_index[1]]);
    }
    
    return 0;
}