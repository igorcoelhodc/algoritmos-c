/* Exercicio 5: Escreva um programa que leia o salário atual de um
funcionário e calcule o salário reajustado de acordo
com as seguintes regras:

- Se o salário até R$ 300,00, o reajuste será de 50%.
- Salários maiores que R$ 300,00, o reajuste será de 30%.*/

// Biblioteca para entrada e saída de dados
#include <stdio.h>
// Função principal do programa
int main () {
    // Variáveis para armazenar o salário atual, o salário reajustado e os fatores de reajuste
    float salarioAtual, salarioReajustado;
    float reajuste1 = 1.5, reajuste2 = 1.3;
    // Solicita ao usuário que digite o salário atual e armazena o valor na variável salarioAtual
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salarioAtual);

    // Verifica se o salário atual é menor ou igual a R$ 300,00 e calcula o salário reajustado de acordo com as regras estabelecidas
    if (salarioAtual <= 300) {
        salarioReajustado = salarioAtual * reajuste1;
    } else {
        salarioReajustado = salarioAtual * reajuste2;

    }
    // Exibe o salário reajustado formatado com duas casas decimais
    printf("Salario reajustado: R$ %.2f\n", salarioReajustado);
    
    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}