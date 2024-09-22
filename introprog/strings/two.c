#include <stdio.h>
#include <ctype.h>

/*
Escreva um programa em C que solicita ao usuário uma frase e converte todas as
letras maiúsculas em minúsculas e todas as letras minúsculas em maiúsculas. O
programa deve imprimir a frase resultante.
*/

int main(void){
    char string[300];

    printf("Insira o texto:\n");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; ++i){
        if (isupper(string[i])){
            string[i] = tolower(string[i]);
        } else if (islower(string[i])){
            string[i] = toupper(string[i]);
        }
    }

    printf("Resultado:\n%s", string);

    return 0;
}