#include <stdio.h>

int main() {
   char nome[100];
    float nota1, nota2, nota3, media;
    
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==        SUA APROVAÇÃO AQUI :D       ==");
    printf("\n=============================================");


    printf("Informe seu nome: ");
    scanf("%s", nome);
    
    printf("Qual a sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Qual sua segunda nota: ");
    scanf("%f",  &nota2);
   
    printf("Qual sua terceira nota: ");
    scanf("%f", &nota3);
     
    media = (nota1 + nota2 + nota3) / 3; 
    printf(" \nNome do aluno: %s\n", nome);
    printf("media: %.2F\n", media);
   
    if( media >=7) {
    printf("APROVADO!!", nome);
    } else {
    printf("REPROVADO :(");
    }
    
    return 0;
}
