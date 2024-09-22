#include <stdio.h>

/*
Faça um programa em C que receba a idade de 10 pessoas e mostre quantas são
maiores que 18 anos.
*/

int main(void){
    int age18 = 0; int age;

    for ( int i = 0; i < 10; ++i ){
        printf("Idade: "); scanf("%d", &age);
        if (age >= 18){
            age18++;
        }
    }

    printf("Quant. de pessoas acima de 18: %d.\n", age18);

    return 0;
}