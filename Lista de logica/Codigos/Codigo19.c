#include <stdio.h>

int main() {
    
   float salariomin, quilo,cobrar,desconto,cadaquilo,setimo;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==          CALCULE QUILOWATTS AQUI :D     ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nInforme o Salario Minimo: ");
    scanf("%f", &salariomin);
    
    printf("\nInforme Quantos Quilowatts Voce Gastou: ");
    scanf("%f", &quilo);
    
    setimo = salariomin / 7;
    cadaquilo = setimo / 100;
    cobrar = cadaquilo * quilo;
    desconto = cobrar * 0.90;

    printf("O valor em reais para cada quilowatts é: %.2f\n", cadaquilo);
    printf("O valor em reais a ser pago: %.2f\n", cobrar);
    printf("O novo valor sera: %.2f\n", desconto);

    
    return 0;
}
