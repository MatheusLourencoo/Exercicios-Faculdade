#include <stdio.h>
#include <stdlib.h>

int main(){

/*Crie um programa que pe�a ao usu�rio para digitar um n�mero maior que 10. Leia o n�mero e escreva na tela todos os
n�meros come�ando pelo 10 at� o n�mero digitado pelo usu�rio. Utilize o while.*/
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
