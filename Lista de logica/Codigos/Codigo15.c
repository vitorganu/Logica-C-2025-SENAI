#include <stdio.h>

int main() {
    
   int n1, n2, n3, media;
   char nome[100];
    
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           CALCULE SUA MEDIA :D          ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nInforme seu nome:");
    scanf("%s", nome);
    
    printf("\nSua primeira nota:");
    scanf("%d", &n1); 
    
    printf("\nSua segunda nota:");
    scanf("%d", &n2); 
    
    printf("\nSua terceira nota:");
    scanf("%d", &n3);

    media = (n1+n2+n3) / 3;
    
    if(media >= 7){
    printf("\nAprovado");
    printf("\nParabens! %s", nome);
    }else if(media >= 5){
    printf("\nRecuperação");
    printf("\nNão Desista! Você ainda consegue %s", nome);
    }else{
    printf("\nReprovado");
    printf("\nNão foi dessa vez, mas na proxima você consegue");
    }
    
    return 0;
}
