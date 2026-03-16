/* Exercicio 8: Guardar 3 notas atribuidas a um trabalho de laboratorio,
uma avaliacao semestral e a um exame final. Notas variando de 0 a 10 e a nota final
é a média ponderada conforme os pesos a seguir:

    Laboratorio - Peso 2
    Avaliação semestral - Peso 3
    Exame final - peso 5

Fazer um programa que receba as 3 notas do estudante, calcule e imprima
a média final e o conceito desse estudante. O conceito segue a table abaixo:

Média final         Conceito
8.01 até 10.0       A
7.01 até  8.0       B
6.01 até  7.0       D
5.01 até  6.0       E
<         5.0       F

*/
#include <stdio.h>
int main() {
    float notaLaboratorio, notaSemestral, notaExameFinal, mediaPonderada;
    int pesoLaboratorio = 2, pesoSemestral = 3, pesoExameFinal = 5;
    char conceito[1];

    printf("Digite a nota do Laboratório: ");
    scanf("%f", &notaLaboratorio);

    printf("Digite a nota da Avaliação Semestreal: ");
    scanf("%f", &notaSemestral);

    printf("Digite agora a nota do Exame Final: ");
    scanf("%f", &notaExameFinal);

    mediaPonderada = (notaLaboratorio * pesoLaboratorio) + (notaSemestral * pesoSemestral) + (notaExameFinal * pesoExameFinal);
    mediaPonderada = mediaPonderada / (pesoLaboratorio + pesoSemestral + pesoExameFinal);

    if(mediaPonderada > 8) {
        printf("Conceito A.\n");
    } else if(mediaPonderada > 7) {
        printf("Conceito B.\n");
    } else if(mediaPonderada > 6) {
        printf("Conceito D.\n");
    } else if(mediaPonderada > 5) {
        printf("Conceito E.\n");
    } else if(mediaPonderada < 5) {
        printf("Conceito F.\n");
    } else if(mediaPonderada > 10) {
        printf("Nota inválida.");
    }

    printf("Sua media final ponderada é: %.2f\n", mediaPonderada);

    return 0;
}