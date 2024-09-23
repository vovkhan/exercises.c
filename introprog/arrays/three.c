#include <stdio.h>

/*
Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes.
Dados os n resultados dos lançamentos, determinar o número de ocorrências de
cada face.
*/

int main(void){
    int len;

    printf("Lances: "); scanf("%d", &len);

    int lances[len];
    int contador[6] = {0};

    printf("Resultado de lançamentos:\n");
    for (int i = 0; i < len; ++i){
        printf("Lance %d: ", i); scanf("%d", &lances[i]);

        if (lances[i] >= 1 && lances[i] <= 6){
            contador[lances[i]-1]++;
        } else {
            printf("Dado de D&D não vale, só dado de bozó.\n");
        }
    }

    for (int i = 0; i < len; i++){
        printf("Oc. face %d: %d; ", i+1, contador[i]);
    }

    return 0;
}