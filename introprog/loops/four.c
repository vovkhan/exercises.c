#include <stdio.h>

/*
A prefeitura de uma cidade quer fazer uma pesquisa com N pessoas, coletando
dados sobre o salário e o número de filhos. A prefeitura deseja saber: (a) A média
do salário dessas pessoas (b) A média do número de filhos (c) O maior salário (d)
A percentagem de pessoas com salários até R$ 1.500,00.
Faça um programa em C que solicita informações de um número N de pessoas
(valor N dado como entrada) e imprime em tela as métricas desejadas.
*/

int main(void){
    int N, sons;
    float mediaSons, sal, mediaSal, maiorSal, percentSal1500;
    float totalSal = 0, totalSons = 0, contadorSal1500 = 0;
    
    printf("Num. de pessoas: "); scanf("%d", &N);

    for (int i = 0; i < N; ++i){
        printf("Sal.: "); scanf("%f", &sal);
        printf("Filhos.: "); scanf("%d", &sons);

        if (i == 0 || sal > maiorSal){
            maiorSal = sal;
        }
        if (sal <= 1500.0){
            contadorSal1500++;
        }

        totalSal += sal;
        totalSons += sons;
    }

    mediaSal = totalSal / N;
    mediaSons = totalSons / N;
    percentSal1500 = (contadorSal1500 * 100) / N;

    printf("Média Sal.: %.2f.\n", mediaSal);
    printf("Média Filhos: %.2f.\n", mediaSons);
    printf("Maior Sal.: %.2f.\n", maiorSal);
    printf("Porcent. de Pessoas com Sal. mínimo: %.2f%%.\n", percentSal1500);
    return 0;
}