#include <stdio.h>

int main() {
   
    char nome [100];
    int idade;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==      NOS CONTE SOBRE VOCÊ AQUI :D          ==");
    printf("\n=============================================");
   
   
    printf("\nQual seu nome? ");
    scanf("%s", &nome);
    printf("\nQual seu Idade? ");
    scanf("%d", &idade);
    
    printf("\nSeu nome é: %s\n", nome);
    printf("\nSua idade é: %d", idade);

    return 0;
}
