#include <stdio.h>

int main() {
    
    int i;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==                5 ATE 500 :D             ==");
    printf("\n==                   5 EM 5                ==");
    printf("\n=============================================\n");

    for(i = 5; i <= 500; i+= 5) {
            printf("%d\n", i);
    }
    
    return 0;
}
