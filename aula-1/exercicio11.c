/* Exercicio 11:
*/
#include <stdio.h>
int main() {
    float num1, num2;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    if(num1 > num2) {
        printf("%.1f e maior que %.1f\n", num1, num2);
    } else{
        printf("%.1f e maior que %.1f\n", num2, num1);
    }

    return 0;
}