#include <stdio.h>

int main() {
   int anoNascimento, anoAtual, idadeAtual, idadeEm2050;
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==    VAMOS DESCOBRIR SUA IDADE EM 2050! :D          ==");
    printf("\n=============================================");
   
printf("digite o ano do seu nascimento: ");
scanf("%d", &anoNascimento);

printf("digite o ano atual: ");
scanf("%d", &anoAtual);

idadeAtual = anoAtual - anoNascimento;
idadeEm2050 = 2050 - anoNascimento;

printf(" Sua idade atual é: %d anos\n", idadeAtual); 
printf("Em 2025, você terá: %d anos\n", idadeEm2050);

    return 0;
}
