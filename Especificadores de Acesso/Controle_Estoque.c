// Programa: Controle de Estoque
// Versão: 1.0
// Autor: Vitor Gabriel Nunes Cardoso
// Data: 31/03/2025
// Descrição: Programa de controle de entrada e saída de produtos em estoque, utilizando modificadores de acesso.

#include <stdio.h> // Biblioteca (Entrada e Saida de Dados)

//Variaveis Globais
    extern int quanTotal; 
    static int quanProduto;
    volatile int contadorDeErros;

//Função para Atualuzar a Quantidade do Produto
void AtualizarEstoque(int quantidade) {
    quanProduto += quantidade; 
    printf("Estoque Atualizado! Quantidade: %d\n", quanProduto);
}

//Otimização com register
void processarEstoque(){
    register int i;
        for (i = 0; i < quanProduto; i++){
            printf("Produto %d em estoque.\n", i + 1);
        }
}

void verificarError() {
    while (contadorDeErros == 0){
    }
    printf("Erros detectados!\n");
}

int main() {
    const float pProduto = 50.0; //Definindo o preço do produto

    //Variaveis Locais
    int quaEntrada, quanSaida;

    //Entrada de Dados
    printf("Digite de Produtos Adicionados no Estoque: ");
    scanf("%d", &quaEntrada);

    AtualizarEstoque(quaEntrada); // Atualiza o estoque

    //Saida de Dados
    printf("Digite de Produtos Retirados no Estoque: ");
    scanf("%d", &quanSaida);

// Atualização do estoque com a quantidade de saída
    if (quanProduto >= quanSaida){
        AtualizarEstoque(-quanSaida);
    }else{
        printf("Estoque insuficiente para a retirada. \n");
    }

    //Exibição de Relatorio 
    printf("----------------\n");
    printf("Relatorio final:\n");
    printf("Preco do produto: %.2f\n", pProduto);
    printf("Quantidade em estoque: %d\n", quanProduto);
    printf("----------------\n");


    return 0;

}