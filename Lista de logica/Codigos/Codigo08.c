#include <stdio.h>
#include <math.h> //Biblioteca para usar a função pow()

int main() {
    
    int n1,n2, calculo;
    
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==             ELEVA-SE AQUI :D            ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nDigite o Numero da Base: "); // 
    scanf("%d", &n1);
    printf("\nDigite o Numero do Expoente: ");
    scanf("%d", &n2);

    //se algum dos numeros for 0 da erro
    if(n1 > 0 && n2 > 0) {
    calculo = pow(n1,n2); //elevar os numeros
    printf("O resultado é: %d", calculo);
    }
    else{
    printf("Digite outro numero que nao seja 0");
    }
    
    return 0;
}
