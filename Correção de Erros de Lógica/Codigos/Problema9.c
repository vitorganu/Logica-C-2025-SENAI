// Descrição: Correção -  Erro de Lógica em Fila (Queue)
// Autor(a): Vitor Gabriel
// Data de entrega: 27/04/2025

#include <stdio.h>

#define MAX 5

int fila[MAX], frente = 0, tras = -1;

int enfileirar(int valor) {
    if (tras == MAX - 1) {
        printf("Fila cheia! Nao foi possivel enfileirar %d\n", valor);
        return 0; // Falha
    } else {
        fila[++tras] = valor;
        return 1; // Sucesso
    }
}

void imprimirFila() {
    if (frente > tras) {
        printf("Fila vazia!\n");
    } else {
        printf("Fila: ");
        for (int i = frente; i <= tras; i++) {
            printf("%d ", fila[i]);
        }
        printf("\n");
    }
}

int main() {
    enfileirar(10);
    enfileirar(20);
    enfileirar(30);
    enfileirar(40);
    enfileirar(50);
    if (!enfileirar(60)) {
        printf("Erro: fila esta cheia, nao foi possivel adicionar 60.\n");
    }

    imprimirFila(); // Mostrar os elementos da fila

    return 0;
}