// Exercício 2: Reajuste Salarial
// Escreva um programa em C que solicite ao usuário o salário atual de um funcionário e calcule o novo salário com base nas seguintes regras:
// - Se o salário atual for menor que R$ 500, o novo salário é calculado com um reajuste de 30%.
// - Se o salário atual for maior ou igual a R$ 500, o novo salário permanece o mesmo.

// Biblioteca para entrada e saída de dados
#include <stdio.h>

// Função principal do programa
int main () {
    // Declaração de variáveis para armazenar o salário atual e o novo salário
    float salarioAtual, NovoSalario;
    float percentualReajuste = 1.3;

    // Solicita ao usuário que insira o salário atual
    printf("Salario atual: ");
    // Lê o salário atual do usuário
    scanf("%f",&salarioAtual);

    // Verifica se o salário atual é menor que R$ 500 para aplicar o reajuste
    if (salarioAtual < 500) {
        // Se o salário atual for menor que R$ 500, o novo salário é calculado com um reajuste de 30%
        printf("Seu salário é menor que R$ 500, portanto, será aplicado um reajuste de 30%%.\n");
        NovoSalario = salarioAtual * percentualReajuste;
        printf("Salario com base na nova regra: R$ %.2f\n", NovoSalario);
    } else {
        // Se o salário atual for maior ou igual a R$ 500, o salário permanece o mesmo
        printf("Seu salário é maior ou igual a R$ 500, portanto, não há reajuste.\n");
    }

    return 0;
}
