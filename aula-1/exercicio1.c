//  Exercicio 1: Faça um programa que leia quatro notas, calcule a média aritmética e mostre o resultado.

// Biblioteca para entrada e saída de dados
#include <stdio.h>

// Função principal do programa
int main () {
    // Declaração de variáveis para armazenar as notas e a média
    float nota1, nota2, nota3, nota4, media;
    
    // Solicita ao usuário que insira as quatro notas
    printf("Nota 1: ");
    scanf("%f",&nota1);
    printf("Nota 2: ");
    scanf("%f",&nota2);
    printf("Nota 3: ");
    scanf("%f",&nota3);
    printf("Nota 4: ");
    scanf("%f",&nota4);

    // Calcula a média aritmética das quatro notas
    media = (nota1+nota2+nota3+nota4)/4;

    // Exibe a média calculada com uma casa decimal
    printf("A media aritmetica das notas inseridas foi calculada em %.1f",media);

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}