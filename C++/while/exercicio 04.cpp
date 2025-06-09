#include <stdio.h>
#include <stdlib.h>

int main(){
	
/*Escreva um programa para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor, ou seja, para
o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro valor lido pelo segundo valor
lido. Caso o usuário digite 0 para o segundo valor, informe queo número precisa ser diferente de 0. */

	int num1, num2;
	int divisao;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite um segundo numero(Diferente de zero): ");
	scanf("%d", &num2);
	
	while(num2 == 0){
		printf("Numero tem que ser diferente de zero!\n");
		printf("Digite um segundo numero(Diferente de zero): \n");
		scanf("%d", &num2);
	}
	
	divisao = num1 / num2;
	
	printf("Divisao: %d\n", divisao);
	
	system("pause");
	return 0;
}
