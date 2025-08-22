#include <stdio.h>

int main() {
    char estado[20];
    int codigo;
    char nomecidade[20];
    int populacao;
    float area;
    float pib;
    int pontoturistico;
    float densidadepopulacional;
    float pibpercapita;

    char estado2[20];
    int codigo2;
    char nomecidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;
    float densidadepopulacional2;
    float pibpercapita2;


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

    printf("\n");

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

    densidadepopulacional2 = populacao2 / area2;
    densidadepopulacional = populacao / area;

    pibpercapita = pib / populacao;
    pibpercapita2 = pib2 / populacao2;

    printf("\n");

    printf("Carta A:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s%d\n", estado, codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populção: %d\n", populacao);
    printf("Area: %.2fkm²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Pontos turiticos: %d\n", pontoturistico);
    printf("Densidade Populacional: %.2fhab/km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);


    printf("\n");

    printf("Carta B:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%d\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populção: %d\n", populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos turiticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2fhab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);

    return 0;
}
