#include <stdio.h>
#include <stdlib.h>

int main(){

/*Crie um programa que peça ao usuário para digitar um número maior que 10. Leia o número e escreva na tela todos os
números começando pelo 10 até o número digitado pelo usuário. Utilize o while.*/
	int numero, contador = 10;
	
	printf("Escreva um numero maior que 10: \n");
	scanf("%d", &numero);
	
	while(contador <= numero){
		printf("%d \n", contador);
		contador++;
	}
	
	system("pause");
	return 0;
}
