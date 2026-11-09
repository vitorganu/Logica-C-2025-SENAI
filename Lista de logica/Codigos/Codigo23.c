#include <stdio.h>
#include <string.h>

int main() {
    
    char resposta[50];
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==         TESTE SEU CONHECIMENTO! :D      ==");
    printf("\n=============================================");
    
    //entrada de dados
    printf("\nQual a capital do Brasil? ");
    scanf("%s", resposta);
    
    if(
    strcmp(resposta, "Brasiléia") == 0 ||
    strcmp(resposta, "brasiléia") == 0 ||
    strcmp(resposta, "Brasileia") == 0 ||
    strcmp(resposta, "brasileia") == 0
    ){
    printf("Resposta Correta!");
    }
    else{
    printf("Resposta Errada! Tente Novamente");
    }
    return 0;
}
