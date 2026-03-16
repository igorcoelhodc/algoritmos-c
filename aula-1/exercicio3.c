// Exercicio 3: Escreva um programa em C que solicite ao usuário que digite uma senha. O programa deve comparar a senha digitada com uma senha pré-definida ("ASDFG") e exibir uma mensagem indicando se o acesso foi permitido ou negado.

// Bibliotecas necessárias para entrada/saída e manipulação de strings
#include <stdio.h>
#include <string.h>

// Função principal do programa
int main () {
    // Declaração de um array de caracteres para armazenar a senha digitada pelo usuário
    char senha[12];

    // Solicita ao usuário que digite a senha
    printf("Digite a senha: ");
    scanf("%s", senha);

    // Compara a senha digitada com a senha pré-definida "ASDFG"
    if (strcmp(senha, "ASDFG") == 0) {
        printf("Acesso permitido\n");
    } else {
        printf("Acesso negado\n");
    }

    return 0;
}