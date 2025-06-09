#include <stdio.h>
#include <stdlib.h>

int main (){
	
/* Crie um programa que pergunte a idade 10 vezes. Para cada idade verifique e imprima a categoria que a pessoa pertence.
Caso seja digitado um valor diferente, imprima “idade inválida”. Idades inválidas não devem influenciar na
contagem. Utilize o for. */

	int idade;
	
	for(int i = 0; i <=9; i++){
		
		printf("Pessoa %d\n", i + 1);
		printf("Digite a idade: \n");
		scanf("%d", &idade);
	
		if(idade >= 8 && idade <= 10 ){
			printf("Categoria Mirim!\n\n");
		}
		else if(idade >= 11 && idade <= 17 ){
			printf("Categoria Junior!\n\n");
		}
		else if(idade >=18){
			printf("Categoria Adulto!\n\n");
		}
		else{
			printf("Idade Invalida!\n\n");
		}
   }
	
	system("pause");
	return 0;
}
