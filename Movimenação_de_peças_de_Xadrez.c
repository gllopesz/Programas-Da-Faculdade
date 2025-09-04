#include <stdio.h>

int main(){
    int num, torre = 0;

    printf("Digite o numero de vezes em que deseja movimentar sua torre: ");
    scanf("%d", &num);
    
    for(int torre = 0; torre <= num;torre++){
        printf("Direita, ");
    }
    printf("\n");

    printf("Digite quantas vezes deseja movimentar seu bispo: ");
    scanf("%d", &num);
    for(int bispo = 0;bispo <= num; bispo++){
        printf("Cima, Direita");
    }
      printf("\n");

      
     return 0;
}
