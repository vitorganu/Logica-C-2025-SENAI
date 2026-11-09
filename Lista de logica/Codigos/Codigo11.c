#include <stdio.h>

int main() {
    
    int n1;
    
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           É PAR OU IMPAR? :I            ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nDigite o numero: ");  
    scanf("%d", &n1);

    if(n1 % 2 == 0) {
    printf("Seu Numero é Par");
    }
    else{
    printf("Seu numero é Impar");
    }
    
    return 0;
}
