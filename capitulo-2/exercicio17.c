#include <stdio.h>
int main() {
    float anos, dias, segundos;
    printf("Digite sua idade em anos: ");
    scanf("%f", &anos);

    dias=anos*365;
    segundos=dias*86400;

    printf("Sua idade em segundos e' %.1f.\n", segundos);

    return 0;
}