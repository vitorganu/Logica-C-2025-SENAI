// Programa: Sistema de Avaliação de Pontuação
// Versão: 1.0
// Autor: Vitor Gabriel Nunes Cardoso
// Data: 01/04/2025
// Descrição: Programa que avalia a pontuação do jogador baseado nas respostas dadas e exibe sua classificação

#include <stdio.h>  // Biblioteca (Entrada e Saída de Dados)

int main() {
   //Variaveis Locais
   int pontuacao;

   //Entrada de Dados
   printf("Digite a Pontuação do Aluno (0 a 100): ");
   scanf("%d", &pontuacao); //Leitura da Nota

   //Estrutura e se
   if (pontuacao >= 70){
       printf("Parabens! Aprovado!\n");
   } else if (pontuacao >= 50){
        printf("Você está de recuperação.\n");
    }else{
         printf("Você foi reprovado. \n");    
    }

    return 0;
}
