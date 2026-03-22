/* Exercicio 15:
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char opcaoMenu[20];
	float num1, num2;
	float raiz;

    printf("Escolha uma das opções: \n");
    printf("soma\n");
    printf("raiz quadrada\n");
    printf("finalizar\n");
    printf("Digite o nome da opcao desejada -> ");
    gets(opcaoMenu);

    if (!strcmp(opcaoMenu, "raiz quadrada")) {
        printf("Vamos calcular uma raiz quadrada.\nEscolha um número para descobrirmos sua raiz: \n");
        scanf("%f", &raiz);
        raiz = sqrt(raiz);

        printf("A raiz quadrada do numero escolhido e: %.2f", raiz);

    } else if(!strcmp(opcaoMenu, "soma")) {
       
        printf("Digite o primeiro numero para somar: \n");
        scanf("%f", &num1);
        printf("Agora, digite o segundo número: \n");
        scanf("%f", &num2);

        printf("A soma resultou %.2f", num1 + num2);
    } else {

    }

    return 0;
}