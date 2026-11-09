// Descrição: Correção -  Erro em Pilha (Stack)
// Autor(a): Vitor Gabriel
// Data de entrega: 27/04/2025

#include <stdio.h>

#define MAX 5


int pilha[MAX], topo = -1;

int push(int valor) {  // Agora retorna int: sucesso ou falha
    if (topo == MAX - 1) {
        printf("Pilha cheia! Nao foi possivel inserir %d\n", valor);
        return 0;  // Falha
    } else {
        pilha[++topo] = valor;
        return 1;  // Sucesso
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    if (!push(60)) {  // Agora dá para tratar o erro aqui se quiser
        printf("Erro ao inserir novo elemento.\n");
    }
    return 0;
}