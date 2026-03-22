/* Faça um programa que receba o número de horas extras e o número de
horas-falta em minutos de um funcionário. Imprima o número de horas extras
em horas. o número de horas-falta em horas e o valor do prêmio.
H(minutos)              Prêmio($)
>2400                   500
1801 até 2400           400
1201 até 1800           300
600 até 1200            200
<= 600                  100

*/
#include <stdio.h>
int main () {
    int minutosExtra, minutosFalta;
    float horasExtra, horasFalta, minutosEfetivos;
    
    printf("Quantas horas extras realizadas (em minutos inteiros)?\n");
    scanf("%d", &minutosExtra);

    printf("E quantas minutos de faltas?\n")/
    scanf("%d", &minutosFalta);

    minutosEfetivos = minutosExtra - (2/3 * minutosFalta);

    printf("\n\n---RELATORIO---\n\nHoras-extra realizadas: %d (h).\n\nFaltas: %d (h).\n\nHoras-extra efetivas: %.2f (h).\n\n\n\n", minutosExtra/60, minutosFalta/60, minutosEfetivos/60);
    
    if (minutosEfetivos > 2400) {
        printf("---PREMIACAO---\n\nA premiacao e de $ 500 por ter feito mais que 2400 minutos extra (%d horas-extra).\n\n", 2400/60);
    } else if (minutosEfetivos > 1800 && minutosEfetivos < 2401) {
        printf("---PREMIACAO---\n\nA premiacao e de $ 400 por ter feito entre 1801 e 2400 minutos extra(entre %d e %d horas-extra).\n\n", 1801/60, 2400/60);
    } else if (minutosEfetivos > 1200 && minutosEfetivos < 1801) {
        printf("---PREMIACAO---\n\nA premiacao e de $ 300 por ter feito entre 1201 e 1800 minutos extra (entre %d e %d horas-extra).\n\n", 1201/60, 1800/60);
    } else if (minutosEfetivos > 600 && minutosEfetivos < 1201) {
        printf("---PREMIACAO---\n\nA premiacao e de $ 200 por ter feito entre 601 e 1200 minutos extra (entre %d e %d horas-extra).\n\n", 600/60, 1200/60);
    } else if (minutosEfetivos < 600) {
        printf("---PREMIACAO---\n\nA premiação e de $ 100 por ter feito 600 minutos ou menos (%d horas-extra ou menos.)\n\n", 600/60);
    } else {
        printf("Sentimos muito, mas não conseguimos calcular os valores informados, por favor tente novamente.\n\n");
    }

    return 0;
}