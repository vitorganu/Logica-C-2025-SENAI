#include <stdio.h>

int main() {
    
    int n1;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==              MAIOR QUE 10? :I           ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nDigite um Numero: ");
    scanf("%d", &n1);

    if(n1 >= 10){
    printf("O numero Digitado foi %d", n1);
    }else{
    printf("O numero Digitado foi menor que 10");
    }
    return 0;
}
