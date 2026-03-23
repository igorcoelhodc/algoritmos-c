/* Capitulo 2, Exercício 18:
Escreva um programa que solicite 3 números em ponto
flutuante e imprima a média aritmética.
*/
#include <stdio.h>
int main() {
    float a, b, c;
    printf("Digite 3 números decimais aleatórios ");
    scanf("%f %f %f", &a, &b, &c);

    printf("A média aritmética é: %.2f ", (a+b+c)/3);
    
    return 0;
}