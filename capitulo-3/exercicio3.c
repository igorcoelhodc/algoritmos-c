#include <stdio.h>
int main() {
	int i = 0, palpite, escolhido = 4, limiteTentativas = 3;
	printf("Escolha um numero entre 0 e 10.");
	scanf("%d", &palpite);
	
	while (i >= 0 && i < limiteTentativas) {
	    if(palpite == escolhido) {
				printf("\n\nParabens, voce acertou!\n\n");
				break;
        } else {
			if (palpite < escolhido) {
				printf("seu numero e menor\n");
		 		printf("Novo palpite: ");
	   			scanf("%d", &palpite);
			} else {
				printf("seu numero e maior\n");
				scanf("%d", &palpite);
			}
		}
        i++;
	}
	
	return 0;
}