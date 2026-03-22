/* Exercicio 12:
*/
#include <stdio.h>
int main() {
    float nota1, nota2, nota3, mediaAritmetica;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    mediaAritmetica = (nota1 + nota2 + nota3) / 3;

    printf("A media aritmetica calculada foi %.2f\n", mediaAritmetica);

    if(mediaAritmetica < 7) {
        printf("reprovado\n");
    } else {
        printf("aprovado\n");
    }

    return 0;
}