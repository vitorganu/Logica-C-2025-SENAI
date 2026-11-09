// Programa: Sistema de Controle de Vendas de Ingressos
// Versão: 1.0
// Autor: Vitor Gabriel Nunes Cardoso
// Data: 25/03/2025
// Descrição: Programa que registra as vendas de ingressos de cinema, calcula total
de vendas e realiza outras operações de cálculo.
#include <stdio.h>
//Função para Calcular o Valor total dos Ingressos
float calTotal(float preco, int quant){
 return preco * quant;
}
int main() {

 char nFilme[50];
 float pIngresso;
 int qIngresso, opcao;
 float tGeral = 0;
 do {
 //Entrada de Dados
 printf("Digite o Nome do Filme: ");
 scanf("%s", nFilme);
 printf("Digite o Valor do Ingresso: ");
 scanf("%f", &pIngresso);
 //Calcular o Total para o Filme atual
 float total = calTotal(pIngresso, qIngresso);
 tGeral += total; //Somando ao Total Geral
 //Exibir Resultado
 printf("Filme: %s\n", nFilme);
 printf("Valor Total dos Ingressos Vendidos Foi: R$ %.2f\n", total);
 //Pergunta se o usuário deseja adicionar outro filme
 printf("\nDeseja Adicionar outro Filme? (1 para sim, 0 para nao): ");
 scanf("%d", &opcao);
 } while (opcao == 1);
 printf("\nTotal de Vendas: R$ %.2f\n", tGeral);
 return 0;
}