/* Exercício 10: 
*/
#include <stdio.h>
int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("O numero escolhido é par.\n");
    } else {
        printf("O numero é impar.\n");
    }

    return 0;
}