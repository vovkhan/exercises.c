#include <stdio.h>
#include <string.h>

/*
Escreva um programa que remove todos os espaços em branco de uma string
fornecida pelo usuário.
*/

void removeSpaces(char* str){
    int len = strlen(str);
    char nospaces[len+1];

    int j = 0;
    for (int i = 0; i < len; ++i){
        if (str[i] != ' '){
            nospaces[j] = str[i];
            j++;
        }
    }
    nospaces[j] = '\0';

    strcpy(str, nospaces);
}

int main(void){
    char string[300];
    printf("Input string:\n");
    scanf("%[^\n]", string); getchar();
    //fgets(string, sizeof(string), stdin);
    removeSpaces(string);
    printf("Result:\n%s\n", string);
    return 0;
}