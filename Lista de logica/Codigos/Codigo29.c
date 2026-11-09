#include <stdio.h>
#include <string.h>
int main() {
    char estado[3];
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           ORIGEM POR SIGLA :D      ==");
    printf("\n=============================================");

    printf("Digite a sigla do seu estado (ex: MG, RJ, SP): ");
    scanf("%s", estado);
    
    if (strcmp(estado, "RJ") == 0  || strcmp(estado, "rj") == 0) {
        printf("Carioca\n");
    } else if (strcmp(estado, "SP") == 0  || strcmp(estado, "sp") == 0) {
        printf("Paulista\n");
    } else if (strcmp(estado, "MG") == 0  || strcmp(estado, "mg")==0) { 
        printf("Mineiro\n");
    } else {
    printf("Outros estados\n");
    }
    return 0;
}
