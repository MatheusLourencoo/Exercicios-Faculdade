#include <stdio.h>  
#include <stdlib.h> 

int main() { 

    /*
    Crie um programa que pe�a ao usu�rio para digitar um n�mero. Se este n�mero for maior que 0, imprima todos os n�meros
    come�ando pelo n�mero digitado pelo usu�rio at� o 0. Se este n�mero for menor que 0, imprima todos os n�meros
    come�ando pelo n�mero digitado pelo usu�rio at� o 0. Se for 0, imprima somente ele.
    */

    int numero; // Declara uma vari�vel do tipo inteiro chamada 'numero' para armazenar o valor digitado pelo usu�rio.

    printf("Digite um numero: "); // Pede ao usu�rio para digitar um n�mero e exibe essa mensagem na tela.
    scanf("%d", &numero);         // L� o n�mero inteiro digitado pelo usu�rio e o armazena na vari�vel 'numero'.
                                  // O '%d' indica que esperamos um inteiro, e '&numero' � o endere�o da vari�vel.

    // Verifica se o n�mero digitado � maior que 0
    if (numero > 0) {
        // O loop continua enquanto 'numero' for maior ou igual a 0.
        while (numero >= 0) {
            printf("%d\n", numero); // Imprime o valor atual de 'numero', seguido de uma quebra de linha.
            numero--;               // Decrementa (subtrai 1 de) 'numero'. Isso faz a contagem regressiva.
        }
    }
    // Sen�o, se o n�mero for menor que 0 (e n�o maior que 0, como verificado acima)
    else if (numero < 0) {
        // O loop continua enquanto 'numero' for menor ou igual a 0.
        while (numero <= 0) {
            printf("%d\n", numero); // Imprime o valor atual de 'numero', seguido de uma quebra de linha.
            numero++;               // Incrementa (soma 1 a) 'numero'. Isso faz a contagem progressiva at� 0.
        }
    }
    // Sen�o (se 'numero' n�o for nem maior que 0, nem menor que 0, ent�o ele s� pode ser 0)
    else {
        printf("%d\n", numero); // Imprime o valor de 'numero' (que � 0), seguido de uma quebra de linha.
                                // N�o � necess�rio um loop aqui, pois s� precisamos imprimir o 0 uma vez.
    }

    system("pause"); 
    return 0; 
}
