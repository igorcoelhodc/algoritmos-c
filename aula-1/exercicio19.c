/* Exercicio 19: Faça um programa que receba o valor do salário mínimo, 
o número de horas trabalhadas, o número de dependentes do funcionário e 
a quantidade de horas extras trabalhadas.

Calcule e imprima o salário a receber do funcionário seguindo as regras abaixo:

- Valor da hora trabalhada é igual a 1/5 do salario minimo;
- Salario do mes é igual ao número de horas trabalhadas vezes o valor da hora
trabalhada;
- Para cada dependente, acréscimo de 32 reais;
- Para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida
de 50%;
- Salário bruto é igual ao salário do mês mais os valores dos dependentes mais os
valores das horas extras;
- Calculo do valor do imposto de renda retido na fonte segue a tabela abaixo.

IRRF        Salario Bruto
Isento      Inferior a 200
10%         De 200 até 500
20%         Superior a 500

- Salário líquido é igual ao salario bruto menor IRRF;
- A gratificação segue a próxima tabela;

Salário Líquido     Gratificação
Até 350             100 reais
Superior a 350      50 reais

- Salário a receber do funcionário é igual ao salário líquido mais a gratificação.
*/

#include <stdio.h>
int main () {
    float salarioMinimo, horasTrabalhadas, horasExtra, salarioBruto, salarioLiquido, salarioReceber, variavelHoraTrabalhada, constanteDependente = 32, constanteExtra = 1.5, valorDependente, valorExtra, salarioMes, irrf, gratificacao;
    int quantidadeDependentes;

    printf("Qual o salário? ");
    scanf("%f", &salarioMinimo);
    printf("Quantos dependentes? ");
    scanf("%d", &quantidadeDependentes);
    printf("Quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Quantidade de horas extra: ");
    scanf("%f", &horasExtra);
    
    variavelHoraTrabalhada = salarioMinimo/5;
    valorExtra = (horasExtra*variavelHoraTrabalhada)*constanteExtra;
    salarioMes = horasTrabalhadas*variavelHoraTrabalhada;
    valorDependente = quantidadeDependentes*constanteDependente;

    salarioBruto = salarioMes + valorExtra + valorDependente;

    printf("\n\n---Salário bruto: %.2f", salarioBruto);

    if (salarioBruto < 200) {
        printf("\nFaixa salarial isenta de IRRF (Imposto de Renda Retido na Fonte).");
        irrf = 0;
    } else if (salarioBruto >= 200 && salarioBruto <=500) {
        printf("\nFaixa salarial com retenção de 10%% na fonte (de 200 até 500 reais).");
        irrf = 10;
    } else if (salarioBruto > 500) {
        printf("\nFaixa salarial com retenção de 20%% na fonte (superior a 500 reais).");
        irrf = 20;
    } else {
        printf("\nNão foi possivel calcular sua solicitação, por favor tente novamente.");
    };


    salarioLiquido = salarioBruto + ((salarioBruto/100)*irrf);

    printf("\n\n---RELATORIO---");
    printf("\n\n-Salario Mensal:R$ %.2f.\n-Valor da hora trabalhada: R$ %.2f.\n-Horas-extra: R$ %.2f (%.2f horas-extra realizadas * %.2f valor da hora trabalhada + 50%% abono).\n\n", salarioMes, variavelHoraTrabalhada, valorExtra, horasExtra, variavelHoraTrabalhada);
    printf("\nIRRF: - R$ %.2f (%.2f %%)", salarioBruto-salarioLiquido, irrf);
    printf("\n\n---SALARIO LÍQUIDO---\n\n");
    printf("R$ %.2f", salarioLiquido);

    if (salarioLiquido < 351) {
        printf("\nGratificacao: R$ 100,00.");
        gratificacao = 100;
    } else {
        printf("\nGratificacao: R$ 50,00");
        gratificacao = 50;
    };

    salarioReceber = salarioLiquido+gratificacao;

    printf("\n\n---SALARIO A RECEBER---\n\nR$ %.2f", salarioReceber);


    return 0;
}