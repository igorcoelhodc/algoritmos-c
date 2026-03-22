/* Exercicio 16: 
*/
#include <stdio.h>
int main () {
    int idade;

    printf("Qual sua idade? ");
    scanf("%d", &idade);

    if(idade < 18) {
        printf("Não permitido para menores de 18 anos.\n");
    } else if(idade > 17 && idade <25) {
        printf("Risco Baixo.\n");
    } else if(idade > 24 && idade < 41) {
        printf("Risco Alto.\n");
    } else {
        printf("Idade inválida.\n");
    }

    
    return 0;
}