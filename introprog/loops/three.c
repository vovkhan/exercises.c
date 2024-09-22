#include <stdio.h>

/*
Escreva um programa que solicita ao usuário um número inteiro não negativo e, em
seguida, calcula e exibe o fatorial desse número.
*/

int main(void){
    unsigned long long input, factorial = 1;

    printf("Num.: "); scanf("%llu", &input);
    
    if (input == 0){
        printf("Fatorial: 1.\n");

        return 0;
    }

    for ( unsigned long long i = input; i >= 1; --i ){
        factorial *= i;
    }

    printf("Fatorial: %llu.\n", factorial);

    return 0;
}