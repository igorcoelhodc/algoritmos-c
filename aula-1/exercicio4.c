// Exercicio 4: Escreva um programa que solicite a idade do usuário e informe se ele é maior ou menor de idade.
// Biblioteca padrão de entrada e saída
#include <stdio.h>
// Função principal do programa
int main () {
    // Variável para armazenar a idade do usuário
    int idade;
    // Solicita ao usuário que digite a idade
    printf("Digite a idade: ");
    scanf("%d", &idade);
    // Verifica se o usuário é maior ou menor de idade e imprime a mensagem correspondente
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    return 0;
}