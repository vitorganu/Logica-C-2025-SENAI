// Programa: Sistema de Avaliação de Pontuação
// Versão: 1.0
// Autor: Vitor Gabriel Nunes Cardoso
// Data: 01/04/2025
// Descrição: Programa que avalia a pontuação do jogador baseado nas respostas dadas e exibe sua classificação

#include <stdio.h>  // Biblioteca (Entrada e Saída de Dados)

int main() {
   //Variaveis Locais
   int res1, res2, res3;
   int media;

   //Entrada de Dados
   printf("Digite a Pontuação da 1 Pergunta:\n");
   scanf("%d", &res1);

   printf("Digite a Pontuação da 2 Pergunta:\n");
   scanf("%d", &res2);

   printf("Digite a Pontuação da 3 Pergunta:\n");
   scanf("%d", &res3);

    //Calculando a Media
    media = (res1 + res2 + res3)/ 3;




    //Estrutura de Condicionais
    if (media > 8){
        printf("Excelente! Sua média foi %d.\n", media);
    } else if (media >= 6) {
        printf("Aprovado! Sua média foi %d.\n", media);
    } else if (media >= 4) {
        printf("Recuperação. Sua média foi %d.\n", media);
    } else {
        printf("Reprovado. Sua média foi %d.\n", media);
    }

    return 0;
}
