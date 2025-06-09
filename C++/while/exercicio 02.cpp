#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*Crie um programa que cadastra os dados dos funcionários de uma empresa. Pergunte o número de funcionários que serão
cadastrados, depois pergunte para cada um: o ID, salário, sexo, férias e imprima os valores de cada um na tela.
Considere ID uma variável int e sexo/férias como char.*/

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
