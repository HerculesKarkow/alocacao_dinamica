#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// cria um ponteiro para o bloco de memoria alocada
	char *memoria_alocada;
	
	//aloca a quantidade de memoria solicitada (50 x char)
	// e inicializa o ponteiro com a posicao da memoria
	memoria_alocada = calloc(50, sizeof(char));
	
	// se o ponteiro for inicializado com o valor nulo
	if(memoria_alocada == NULL)
	{
		// exibe amensagem de erro
		printf("Nao foi possivel alocar a memoria alocada!\n");
	}
	// se o ponterio não for nulo
	else
	{
		// transfere a mensagem para a memoria alocada
		strcpy(memoria_alocada, "Esta e a melhor aula do mundo!\n");
	}
	
	//exibe o conteudo da memoria alocada
	printf("O conteudo da memoria alocada eh: %s\n", memoria_alocada);
	
	// altera a quantidade de memoria alocada para (100 x char)
	memoria_alocada = realloc(memoria_alocada, 100 * sizeof(char));
	
	//se o ponteiro foi inicializado com o valor nulo
	if(memoria_alocada == NULL)
	{
		// exibe a mensagem de erro
		printf("Nao foi possivel alocar a memoria alocada!\n");
	}
	// se o ponteiro nao for nulo
	else 
	{
		//transfere a mensagem para a memoria alocada
		strcpy(memoria_alocada, "Quantidade de memoria alocada alterada!\n");
	}
	
	// exibe o conteudo da memoria alocada
	printf("O conteudo da memoria alocada eh: %s\n", memoria_alocada);
	
	//libera a memoria alocada
	free(memoria_alocada);
	
	// retorna 0
	return 0;
}
