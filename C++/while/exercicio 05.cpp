#include <stdio.h>
#include <stdlib.h>

int main(){
	
/*Crie um programa que pergunte duas notas para o usu�rio. Leia os valores, realize a m�dia das notas e imprima na tela.
S� podem ser aceitos valores v�lidos (de 0 a 100) para cada nota. Caso seja digitava um valor inv�lido, informe ao usu�rio. */

	int nota1, nota2;
	int media;
	
	printf("Digite um numero de (0 a 100): ");
	scanf("%d", &nota1);
	
	printf("Digite um numero de (0 a 100): ");
	scanf("%d", &nota2);
	
	while(nota1 > 100 || nota1 < 0){
		printf("numero invalido!\n");
		printf("Digite um numero de (0 a 100): \n");
		scanf("%d", &nota1);
		nota1 ++;		
	}
	
	while(nota2 > 100 || nota2 < 0){
        printf("Valor invalido para a segunda nota!\n"); 
        printf("Digite a segunda nota novamente (0 a 100): \n");
        scanf("%d", &nota2);
	}
	media = (nota1 + nota2) / 2;
	
	printf("Media: %d\n", media);
	
	system ("pause");
	return 0;
}
