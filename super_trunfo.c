#include <stdio.h>

int main() {
    char estado[20];
    int codigo;
    char nomecidade[20];
    int populacao;
    float area;
    float pib;
    int pontoturistico;


    printf("Uma letra para representar o Estado: ");
    scanf("%s", estado);

    printf("Código da cidade: ");
    scanf("%d", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade); 
    
    printf("População: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Quntos pontos turíticos possui? ");
    scanf("%d", &pontoturistico);

    printf("Carta A:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%d\n", estado, codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populção: %d\n", populacao);
    printf("Area: %.2fkm²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Pontos turiticos: %d\n", pontoturistico);

    char estado2[20];
    int codigo2;
    char nomecidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    printf("Uma letra para representar o Estado: ");
    scanf("%s", estado2);

    printf("Código da cidade: ");
    scanf("%d", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomecidade2); 
    
    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quntos pontos turíticos possui? ");
    scanf("%d", &pontoturistico2);

    printf("Carta B:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%d\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populção: %d\n", populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos turiticos: %d", pontoturistico2);


    return 0;
}