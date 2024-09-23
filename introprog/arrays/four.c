#include <stdio.h>

/*
Faça um programa que receba do usuário dois vetores representando conjuntos A e
B. Crie um novo vetor denominado C calculando C = A ∩ B. Mostre na tela os
dados do vetor C.
*/

void printArray(int* array, int size){
    for (int i = 0; i < size; ++i){
        printf("%d; ", array[i]);
    }
    printf("\n");
}

void fillArray(int* array, int size){
    for (int i = 0; i < size; ++i){
        printf("Index %d: ", i); scanf("%d", &array[i]);
    }
}

int main(void){
    int lenA, lenB, lenC = 0;

    printf("len A and B: "); scanf("%d %d", &lenA, &lenB);

    int A[lenA], B[lenB];

    printf("Array A:\n");
    fillArray(A, lenA);
    
    printf("Array B:\n");
    fillArray(B, lenB);

    for (int i = 0; i < lenA; ++i){
        for (int j = 0; j < lenB; ++j){
            if (A[i] == B[j]){
                lenC++;
            }
        }
    }

    int C[lenC];
    int indexC = 0;
    for (int i = 0; i < lenA; ++i){
        for (int j = 0; j < lenB; ++j){
            if (A[i] == B[j]){
                C[indexC] = A[i];
                indexC++;
            }
        }
    }

    printf("A:\n");
    printArray(A, lenA);

    printf("B:\n");
    printArray(B, lenB);

    printf("C:\n");
    printArray(C, lenC);

    return 0;
}