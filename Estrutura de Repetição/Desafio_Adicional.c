// Programa: Sistema de Controle de Vendas de Ingressos
// Versão: 1.0
// Autor: Vitor Gabriel Nunes Cardoso
// Data: 25/03/2025
// Descrição: Programa que registra as vendas de ingressos de cinema, calcula
total de vendas e realiza outras operações de cálculo.
#include <stdio.h>
//Função para Calcular o Valor total dos Ingressos
float calTotal(float preco, int quant){
 return preco * quant;
}
int main() {

 char nFilme[50];
 float precIngresso, totalFilme, totalGeral = 0, mediaVendas = 0;
 int quantIngresso, opcao, maxIngresso = 0, maxFilmeIndex = 0;
 for (int i = 0; i < 5; i++){
 printf("\nDigite o nome do filme: ");
 scanf("%s", nFilme);
 printf("\nDigite o Valor do Ingresso: ");
 scanf("%f", &precIngresso);
 printf("\nDigite a Quantidade de Ingressos Vendidos: ");
 scanf("%d", &quantIngresso);
 //Soma de Total de Vendas
 totalFilme = calTotal(precIngresso, quantIngresso);
 totalGeral += totalFilme;
 if(quantIngresso = maxIngresso){
 maxIngresso = quantIngresso;
 maxFilmeIndex = i;
 }
 //Media de Vendas
 mediaVendas = totalGeral / (i + 1);
 printf("\nFilme: %s\n", nFilme);
 printf("Total de Vendas: R$ %.2f\n", totalFilme);
 }

 //Exibe Menu de Resultados
 printf("--------------------------");
 printf("\nTotal Geral das Vendas: R$ %.2f\n", totalGeral);
 printf("\nMédia das Vendas: R$ %.2f\n", mediaVendas);
 printf("\nFilme com Maior Quantidade de Ingressos Vendidos: Filme %d com
%d ingressos\n", maxFilmeIndex + 1, maxIngresso);
 printf("--------------------------");
 return 0;
}