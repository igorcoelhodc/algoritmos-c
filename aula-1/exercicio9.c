/* Fazer um programa que receba o preço de um produto e seu código de
origem, imprima a sua procedência, obedecendo a tabela:
Código de origem        Procedẽncia
1                       Sul
2                       Norte
3                       Leste
4                       Oeste
5 ou 6                  Nordeste
7, 8 ou 9                Sudeste
10 até 20               Centro-oeste
21 até 30               Nordeste
*/
#include <stdio.h>
int main() {
    float preco, codigoOrigem;

    printf("Informe o preço do produto: ");
    scanf("%f", &preco);

    printf("Informe o código do produto: ");
    scanf("%f", &codigoOrigem);

    if(codigoOrigem == 1){
        printf("Seu produto é do Sul.\n");
    } else if(codigoOrigem == 2) {
        printf("Seu produto é do Norte.\n");
    } else if(codigoOrigem == 3) {
        printf("Seu produto é do Leste.\n");
    } else if(codigoOrigem == 4) {
        printf("Seu produto é do Oeste.");
    } else if(codigoOrigem == 5 || codigoOrigem == 6) {
        printf("Seu produto é do Nordeste.\n");
    } else if(codigoOrigem > 6 && codigoOrigem < 10) {
        printf("Seu produto é do Sudeste.\n");
    } else if(codigoOrigem > 9 && codigoOrigem < 21) {
        printf("Seu produto é do Centro-oeste.\n");
    } else if(codigoOrigem > 20 && codigoOrigem < 31) {
        printf("Seu produto é do Nordeste.\n");
    } else {
        printf("Código de produto não localizado nas nossas bases de dados.\n");
    }

    return 0;
}