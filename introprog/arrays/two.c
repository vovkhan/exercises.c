#include <stdio.h>

/*
Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a media geral.
*/

void printArray(float* array, int size){
    for (int i = 0; i < size; ++i){
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

int main(void){
    int len = 15; float grades[len];
    
    printf("Insira as 15 notas a seguir:\n");
    for (int i = 0; i < len; ++i){
        printf("Nota %d: ", i); scanf("%f", &grades[i]);
    }
    printf("Notas:\n");
    printArray(grades, len);

    float sum = 0.0;
    for (int i = 0; i < len; i++){
        sum += grades[i];
    }
    
    float medium = sum / len;
    printf("Média: %.2f.\n", medium);

    return 0;
}