#include <stdio.h>
#include <stdlib.h>

int main(){
		
	int opcao;
	char adicional;
	
	printf("Seja bem vindo a Reginaldo Lanches!\n");
	printf("\nEscolha uma opcao:\n\n 1-Cachorrao\n 2-X-Tudo\n 3-Coca Gelada\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Voce escolheu Cachorrao!\n");
			printf("Voce quer pedir algo mais? (S/N)");
			scanf("%c", &adicional);
			
			if(adicional == 'S' || adicional == 's'){
				printf("O que deseja adicionar?\n 1-Cachorrao\n 2-X-Tudo\n 3-Coca Gelada\n");
			}
			else{
				printf("kakaakka");
			}
						
	}
}
