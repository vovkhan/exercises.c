#include <stdio.h>
#include <string.h>

/*
Escreva um programa que verifica se uma string fornecida pelo usuário é um
palíndromo. Um palíndromo é uma palavra ou frase que é lida da mesma forma de
trás para frente. Por exemplo, "radar" é um palíndromo.
*/

void invertString(char* str){
    int len = strlen(str);
    char inverted[len+1];

    for (int i = 0; i < len; ++i){
        inverted[i] = str[len-1-i];
    }
    inverted[len] = '\0';

    for (int i = 0; i < len; ++i){
        str[i] = inverted[i];
    }
}

int main(void){
    char string[300];
    printf("Input string:\n");
    fgets(string, sizeof(string), stdin);
    invertString(string);
    printf("Result:%s\n", string);
    return 0;
}