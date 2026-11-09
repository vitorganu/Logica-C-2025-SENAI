// Descrição: Correção -  Erro em Lista Encadeada (Inserção)
// Autor(a): Vitor Gabriel
// Data de entrega: 27/04/2025

#include <stdio.h>
#include <stdlib.h>  // Necessário para malloc e free

struct Node {
    int valor;
    struct Node* prox;
};

void inserir(struct Node** lista, int valor) {
    struct Node* novo = (struct Node*) malloc(sizeof(struct Node));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    novo->valor = valor;
    novo->prox = *lista;  // Aponta para o que era o começo
    *lista = novo;        // Atualiza o início da lista
}

void imprimir(struct Node* lista) {
    while (lista != NULL) {
        printf("%d -> ", lista->valor);
        lista = lista->prox;
    }
    printf("NULL\n");
}

int main() {
    struct Node* lista = NULL;

    inserir(&lista, 10);
    inserir(&lista, 20);
    inserir(&lista, 30);

    imprimir(lista); 

    return 0;
}