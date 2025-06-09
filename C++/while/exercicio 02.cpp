#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*Crie um programa que cadastra os dados dos funcion�rios de uma empresa. Pergunte o n�mero de funcion�rios que ser�o
cadastrados, depois pergunte para cada um: o ID, sal�rio, sexo, f�rias e imprima os valores de cada um na tela.
Considere ID uma vari�vel int e sexo/f�rias como char.*/

	int id, funcionarios, contador = 1;
	char sexo, ferias;
	float salario;
	
	printf("Quantos funcionarios serao cadastrados: ");
	scanf("%d", &funcionarios);
	
	
	while(contador <= funcionarios){
		
	    printf("Digite o ID do funcionario %d: ", contador);
		scanf("%d", &id);
	
		printf("Digite o salario do funcionario %d: ", contador);
		scanf("%f", &salario);
	
		printf("Digite o sexo (F/M) do funcionario %d: ", contador);
		scanf(" %c", &sexo);
	
		printf("O funcionario %d esta de ferias? (S/N): ", contador);
		scanf(" %c", &ferias);
		
		printf("Dados do funcionario %d\n\n", contador);
		printf("ID: %d\n", id);
		printf("Salario: R$%.2f\n", salario);
		printf("Sexo: %c\n", sexo);
		printf("Ferias: %c\n\n", ferias);
		
		contador ++;
	}
	
	
	system("pause");
	return 0;
}
