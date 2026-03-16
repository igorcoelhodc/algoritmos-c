/* Exercicio 6: Faça um programa que receba a altura e o sexo
de uma pessoa, calcule e imprima o seu peso ideal, utiliando as seguintes fórmulas:
- Para homens: (72.7 * altura) - 58
- Para mulheres: (62.1 * altura) - 44.7 */

// Biblioteca necessária para entrada e saída de dados
#include <stdio.h>
// Função principal do programa
int main() {
    // Variáveis para armazenar o sexo, altura, peso ideal e os multiplicadores e subtratores para homens e mulheres
    char sexo[1];
    float altura, peso_ideal, multiplicadorIdealM = 72.7, multiplicadorIdealF = 62.1,subtratorIdealM = 58, subtratorIdealF = 44.7;
    // Solicita ao usuário que digite o sexo e a altura
    printf("Digite o sexo designado ao nascer, \nM (masculino)\nF (feminino) : ");
    scanf("%s", sexo);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    // Verifica o sexo e calcula o peso ideal de acordo com a fórmula correspondente, imprimindo o resultado
    if(sexo[0] == 'M' || sexo[0] == 'm') {
        peso_ideal = (multiplicadorIdealM * altura) - subtratorIdealM;
        printf("O seu peso ideal é: %.2f kg.\n", peso_ideal);
    } else if(sexo[0] == 'F' || sexo[0] == 'f') {
        peso_ideal = (multiplicadorIdealF * altura) - subtratorIdealF;
        printf("O seu peso ideal é: %.2f kg.\n", peso_ideal);
    } else {
        // Caso o sexo ou a altura sejam inválidos, exibe uma mensagem de erro
        printf("Sexo ou altura inválidos, escolha uma das opções M ou F e lembre-se de digitar a altura em metros com . ao invés de , .");
    }
    // Encerra o programa com sucesso
    return 0;
}