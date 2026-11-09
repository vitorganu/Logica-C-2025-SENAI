#include <stdio.h>
#include <string.h>

int main() {
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==             DEVOLVER O LIVRO :D         ==");
    printf("\n=============================================");

    char nLivro[100];
    char tUsuario[100];
    
    printf("\nDigite o Nome do Livro: ");
    fgets(nLivro, sizeof(nLivro), stdin);
    
    printf("\nVocê é um Aluno ou Professor?: ");
    scanf("%s", tUsuario);
    
    if (strcmp(tUsuario, "Professor") == 0 || strcmp(tUsuario, "professor") == 0){
    printf("Você tem 10 Dias para Devolver o Livro \"%s\".\n", nLivro);
    } else if (strcmp(tUsuario, "Aluno") == 0 || strcmp(tUsuario, "aluno") == 0) {
    printf("Você tem 3 Dias para Devolver o Livro \"%s\".\n", nLivro);

    } else {
    printf("Tipo de Usuario nao Cadastrado, Tente Novamente!");
    }
    
    return 0;
}
