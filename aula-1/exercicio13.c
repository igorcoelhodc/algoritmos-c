/* Exercicio 13: 
*/
#include <stdio.h>
int main() {
    int idade;

    printf("Qual sua idade? ");
    scanf("%d", &idade);

    if(idade > 55) {
        printf("Acima de 55 anos. Classificação: Idoso.\n");
    } else if(idade >= 20 && idade <= 55) {
        printf("Entre 20 e 55 anos. Classificação: Adulto.\n");
    } else if(idade >= 12 && idade <= 19) {
        printf("Entre 12 e 19 anos. Classificação: Adolescente.\n");
    } else if(idade >= 3 && idade <= 11) {
        printf("Entre 3 e 11 anos. Classificação: Criança 1.\n");
    } else if(idade >= 0 && idade <= 2) {
        printf("Entre 0 e 2 anos. Classificação: Recém-nascido.\n");
    }

    return 0;
}