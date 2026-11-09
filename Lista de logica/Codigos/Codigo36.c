#include <stdio.h>

int main() {
    
    int i;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==               PARES ATÉ 10 :D           ==");
  printf("\n=============================================\n");

    for(i = 1; i <= 10; i++) {
        if( i % 2 == 0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
