#include <stdio.h>

int main() {
   char nome[50];
    float vendas, comissao, salariofixo, salariofinal;
     
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==   AQUI SEU LUCRO DE VENDAS NESTE MÊS:D       ==");
    printf("\n=============================================");


    printf("Informe seu nome: ");
    scanf("%s", nome);
    
    printf("Qual o seu salario fixo: ");
    scanf("%f", &salariofixo);
    
    printf("Quanto em vendas você fez este mês: ");
    scanf("%f", &vendas);
    
    comissao = vendas * 0.15;
    salariofinal = salariofixo + comissao; 
    
    printf(" \nNome do vendedor: %s\n", nome);
    printf(" Seu salario fixo é: %.2f\n", salariofixo);
    printf(" Seu salario final com comissao: R$ %.2f\n ", salariofinal);
   
    return 0;
}
