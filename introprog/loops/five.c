#include <stdio.h>

/*
Supondo que a população de um país A seja da ordem de 80000 habitantes com
uma taxa anual de crescimento de 3% e que a população de B seja 200000
habitantes com uma taxa de crescimento de 1.5%.

Faça um programa que calcule e escreva o número de anos necessários para que a
população do país A ultrapasse ou iguale a população do país B, mantidas as taxas
de crescimento.
*/

int main(void){
    double A = 80000.0, B = 200000.0;
    double crescA = 0.03, crescB = 0.015;
    int years = 0;

    while (A < B){
        A += A*crescA;
        B += B*crescB;
        years++;
    }
    
    printf("A: %.2lf; B: %.2lf; Anos: %d.\n", A, B, years);
    return 0;
}