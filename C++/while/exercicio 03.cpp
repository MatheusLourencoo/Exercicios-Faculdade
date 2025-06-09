#include <stdio.h>  
#include <stdlib.h> 

int main() { 

    /*
    Crie um programa que peça ao usuário para digitar um número. Se este número for maior que 0, imprima todos os números
    começando pelo número digitado pelo usuário até o 0. Se este número for menor que 0, imprima todos os números
    começando pelo número digitado pelo usuário até o 0. Se for 0, imprima somente ele.
    */

    int numero; // Declara uma variável do tipo inteiro chamada 'numero' para armazenar o valor digitado pelo usuário.

    printf("Digite um numero: "); // Pede ao usuário para digitar um número e exibe essa mensagem na tela.
    scanf("%d", &numero);         // Lê o número inteiro digitado pelo usuário e o armazena na variável 'numero'.
                                  // O '%d' indica que esperamos um inteiro, e '&numero' é o endereço da variável.

    // Verifica se o número digitado é maior que 0
    if (numero > 0) {
        // O loop continua enquanto 'numero' for maior ou igual a 0.
        while (numero >= 0) {
            printf("%d\n", numero); // Imprime o valor atual de 'numero', seguido de uma quebra de linha.
            numero--;               // Decrementa (subtrai 1 de) 'numero'. Isso faz a contagem regressiva.
        }
    }
    // Senão, se o número for menor que 0 (e não maior que 0, como verificado acima)
    else if (numero < 0) {
        // O loop continua enquanto 'numero' for menor ou igual a 0.
        while (numero <= 0) {
            printf("%d\n", numero); // Imprime o valor atual de 'numero', seguido de uma quebra de linha.
            numero++;               // Incrementa (soma 1 a) 'numero'. Isso faz a contagem progressiva até 0.
        }
    }
    // Senão (se 'numero' não for nem maior que 0, nem menor que 0, então ele só pode ser 0)
    else {
        printf("%d\n", numero); // Imprime o valor de 'numero' (que é 0), seguido de uma quebra de linha.
                                // Não é necessário um loop aqui, pois só precisamos imprimir o 0 uma vez.
    }

    system("pause"); 
    return 0; 
}
