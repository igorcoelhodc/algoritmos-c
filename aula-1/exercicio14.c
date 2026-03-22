/* Exercicio 14:
*/
#include <stdio.h>
int main() {
    int codigo;

    printf("Digite o código do seu cargo: \n");
    scanf("%d", &codigo);

    if(codigo == 1) {
        printf("Cargo: Escriturario. Percentual: 50%%.\n");
    } else if(codigo == 2) {
        printf("Cargo: Secretario. Percentual: 35%%.\n");
    } else if(codigo == 3) {
        printf("Cargo: Caixa. Percentual: 20%%.\n");
    } else if(codigo == 4) {
        printf("Cargo: Gerente. Percentual: 10%%.\n");
    } else if(codigo == 5) {
        printf("Cargo: Diretor. Percentual: Não tem aumento.\n");
    } else {
        printf("Cargo não encontrado.\n");
    }

    return 0;
}