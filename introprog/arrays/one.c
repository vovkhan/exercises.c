#include <stdio.h>

/*
Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.
*/

void printArray(int* array, int size){
    for (int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void){
    int len;

    printf("Tamanho da sequência: "); scanf("%d", &len);

    int sequence[len];
    for (int i = 0; i < len; ++i){
        printf("Item %d: ", i); scanf("%d", &sequence[i]);
    }
    
    printf("Sequência:\n");
    printArray(sequence, len);

    int inverted[len]; int j = 0;
    for (int i = len-1; i >= 0; --i){
        inverted[j] = sequence[i];
        j++;
    }

    printf("Invertida:\n");
    printArray(inverted, len);

    return 0;
}