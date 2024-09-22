#include <stdio.h>

/*
Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o valor de H
com N termos.
*/

int main(void){
    int N; double H = 0.0;

    printf("N: "); scanf("%d", &N);

    for ( int i = 1; i <= N; ++i ){
        H += 1.0 / i;
    }

    printf("H: %.2lf.\n", H);

    return 0;
}