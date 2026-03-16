/* Exercício 7: Escreva um programa que receba a idade de um nadador
e imprima a sua categoria seguindo as regras abaixo:
    Categoria       Idade
    Infantil A      5 a 7 anos
    Infantil B      8 a 10 anos
    Juvenil A      11 a 13 anos
    Juvenil B      14 a 17 anos
    Sênior          Maiores de 18 anos
*/
#include <stdio.h>
int main() {
    int idade;

    printf("Bem vindo ao campeonato de natacao, qual sua idade? " );
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("Sua categoria e Senior.\n");
    } else if(idade >= 14) {
        printf("Sua categoria e Juvenil B.\n");
    } else if(idade >= 11) {
        printf("Sua categoria e Juvenil A.\n");
    } else if(idade >=8) {
        printf("Sua categoria e Infantil B.\n");
    } else if(idade >= 5) {
        printf("Sua categoria e Infantil A.\n");
    } else {
        printf("Sua idade nao permite participacao nesse campeonato.\n");
    }

    return 0;
}