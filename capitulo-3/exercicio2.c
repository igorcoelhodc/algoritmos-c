#include <stdio.h>
int main () {
    int i = 0, opcao;

    printf("Escolha uma opção:\n1 - Imprimir na tela os numeros pares de 1 a 100.\n2 - Imprimir na tela os numeros impares de 1 a 100.\n3 - Imprimir na tela os numeros e a quantidade de numeros divisiveis por 5 entre 1 a 100.\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            while (i <= 100) {
                if(i % 10 == 0) {
                    printf("\n");
                }
                printf("%d ", i);
                i++;
            }
            printf("\n");
            break;
        case 2:
	      	do {
                if(i % 10 == 0) {
                    printf("\n");
                }
	      		if(i % 2 != 0) {
		 	  	 	printf("%d ", i);
        		};
        		i++;
			   }while (i < 101);
            printf("\n");
      		break;
        case 3:
  			 do {
                if (i % 10 == 0) {
                    printf("\n");
                }
  			 	if(i % 5 == 0) {
  			 		printf("%d ", i);
				   }
				   i++;
			   } while (i < 101);
            printf("\n");
            break;
    }

    return 0;
}