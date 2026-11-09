#include <stdio.h>

int main() {
    //DEFINIÇÃO DE VARIAVEIS
    char nomes [5][50];
    char equipamentos[5][30];
    float valores[5];
    float soma = 0, maior = 0;
    int posMaior = 0;
    float media

    //ENTRADA DE DADOS USANDO LAÇO DE REPETIÇÃO
    for(int i = 0; 1 < 5; i++){ 
        printf("\nAtendimento %d\n", i + 1);
        printf("Nome do Cliente: ");
        scanf(" %[^\n]", nomes[i]);

        printf("Tipo de Ferramenta: ");
        scanf(" %[^\n]", equipamentos[i]);

        printf("Valor do Serviço em R$:");
        scanf("%f", &valores[i]);
    }

    //RELATORIO DOS DADOS EM ORDEM CRESCENTE
    printf("\n--- RELATÓRIO DE ATENDIMENTOS ---\n");
    for(int i = 0; i < 5; i++) {
    printf("Cliente: %s | Equipamento: %s | Valor: R$ %.2f\n", nomes[i], equipamentos[i], valores[i]);
    soma += valores[i];
        if(valores[i] > maior) {
            maior = valores[i];
            posMaior = i;
        }
    }

    media = soma / 5;
    printf("\nMédia dos valores: R$ %.2f\n", media);
    printf("Atendimento mais caro: %s (R$ %.2f)\n", nomes[posMaior], maior);
    
}