/* Autoria:
 * 
 * 		Universidade Federal de Pelotas
 * 		Centro de Desenvolvimento Tecnológico
 * 		Bacharelado em Ciência da Computação
 * 		Glauco Roberto Munsberg dos Santos
 * 			glaucomunsberg@gmail.com	
 * 
 * Sobre o Projeto:
 * 		Trabalho desenvolvido como avaliação de Estrutura de Dados 1
 * 		Para maiores informações sobre o projeto,
 * 		ele se encontra disponível pelo endereço http://github.com/glaucomunsberg/Floresta-Tropical
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "arvorelib.h"

struct desc_tree *init()
{
	
	/*
	 * Entradas:	Não tem
	 *
	 * Função:		Aloca espaço, inicializa fila
	 * 
	 * Saída:		Um ponteiro para um descritor de fila
	 */
	 
	struct desc_tree *descritor;
	descritor = malloc(sizeof(struct desc_tree));
	if( descritor == NULL)
	{
		printf("		Oops! Não há memoria para alocar!");
		getchar();getchar();
		exit(1);
	}
	else
	{
		descritor->raiz = NULL;
		descritor->tamanho = 0;
	}
	
}
int find(struct desc_tree *descritor, struct nodo *T)
{
	return 0;
}

int insert(struct desc_tree *descritor, struct nodo *T)
{
	return 0;
}

int delete(struct desc_tree *descritor, struct nodo *T)
{
	return 0;
}
