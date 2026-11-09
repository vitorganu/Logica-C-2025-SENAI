include <stdio.h>

int main() {
    
    float l, km, kml;
    
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==        CALCULO DE CONSUMO KM/L :D       ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nEscreva Quantos km Você Andou: ");  
    scanf("%f", &km);

    printf("\nEscreva Quantos Litro você Gastou: ");
    scanf("%f", &l);
    
    kml = km / l;
    printf("O seu consumo foi: %f", kml, "Km/L");
    
    return 0;
}
