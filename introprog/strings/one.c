#include <stdio.h>

/*
Escreva um programa que conta o número de palavras em uma string fornecida pelo
usuário. Palavras são separadas por espaços em branco.
*/

int main(void){
    char input[300];

    printf("Insira o texto a seguir:\n");
    //getchar(); scanf("%[^\n]", &input); getchar();
    fgets(input, sizeof(input), stdin);

    char inWord = 0;
    int countWords = 0;    
    for (int i = 0; input[i] != '\0'; ++i){
        if (input[i] == ' ' || input[i] == '\n'){
            if (inWord){
                inWord = 0;
            }
        } else {
            if (!inWord) {
                inWord = 1;
                countWords++;
            }
        }
    }

    printf("Quantidade de palavras no texto inserido: %d.\n", countWords);
    return 0;
}