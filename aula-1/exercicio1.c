//Inclui a biblioteca stdio.h (Standard Input-Output Header) para entrada e saída de dados no terminal
#include <stdio.h>

//Declaração da função principal
int main () {
    //Declaração das variáveis do tipo float para notas e média
    float nota1, nota2, nota3, nota4, media;
    
    //Mostra instrução na tela
    printf("Nota 1: ");
    
    //Lê o valor inserido pelo usuário no terminal e armazena na variável correspondente
    scanf("%f",&nota1);
    printf("Nota 2: ");
    scanf("%f",&nota2);
    printf("Nota 3: ");
    scanf("%f",&nota3);
    printf("Nota 4: ");
    scanf("%f",&nota4);
    
    //Calcula a média aritmética das notas inseridas e armazena o valor na variável media
    media = (nota1+nota2+nota3+nota4)/4;
    
    //Mostra o valor armazenado na variável media no terminal
    printf("A media aritmetica das notas inseridas foi calcada em %.2f",media);

    return 0;
}
