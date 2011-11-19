#ifndef ARVORE_H
#define ARVORE_H

#define MAX 20

typedef struct{
	int valor;
}elemento;

struct nodo{
	elemento chave;
	struct nodo *direita;
	struct nodo *esquerda;
};

struct desc_tree{
	struct nodo *raiz;
	int tamanho;
};

struct desc_tree *init();
int find(struct desc_tree *descritor, struct nodo *T);
int insert(struct desc_tree *descritor, struct nodo *T);
int delete(struct desc_tree *descritor, struct nodo *T);

#endif
