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
    float superpoder;

    char estado2[20];
    int codigo2;
    char nomecidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;
    int opçao;

    int atributo1 = -1, atributo2 = -1;

    printf("==== JOGO SUPER TRUNFO ====\n");
    printf("Adicione informações das cartas\n");
    printf("\n");

    printf("==== CADASTRO DA CARTA 1 ====\n");
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

    printf("==== CADASTRO DA CARTA 2 ====\n");
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

    superpoder = (float)populacao + area + pib + pontoturistico + pibpercapita + (1.0 / densidadepopulacional);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1.0 / densidadepopulacional2);

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
    printf("Suer Poder: %.2f\n", superpoder);

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
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\nComparação de Cartas:\n");
    printf("População: ");
    if (populacao > populacao2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2 venceu\n");
    }
    
    printf("Área: ");
    if(area > area2){
        printf("Carta 1 venceu\n");
    }else{
        printf("Carta 2 venceu\n");
    }

    printf("PIB: ");
    if(pib > pib2){
        printf("Carta 1 venceu\n");
    }else{
        printf("Carta 2 venceu\n");
    }

    printf("Pontos Turísticos: ");
    if(pontoturistico > pontoturistico2){
        printf("Carta 1 venceu\n");
    }else{
        printf("Carta 2 venceu\n");
    }

    printf("Densidade Populacional: ");
    if(densidadepopulacional < densidadepopulacional2){
        printf("Carta 1 venceu\n");
    }else{
        printf("Carta 2 venceu\n");
    }

    printf("PIB per Capita: ");
    if(pibpercapita > pibpercapita2){
        printf("Carta 1 venceu\n");
    }else{
        printf("Carta 2 venceu\n");
    }
    printf("Super Poder: ");
    if(superpoder > superpoder2){
        printf("Carta 1 venceu\n");
    }else{
        printf("Carta 2 venceu\n");
    }

    printf("\n");

    printf("==== MENU DE OPÇÕES ====\n");
    printf("\n");
    printf("1 - Nome dos dois países.\n");
    printf("2 - Atributo usado na comparação.\n");
    printf("3 - Os valores do atributo para cada carta.\n");
    printf("4 - Qual carta venceu. \n");
    printf("5 - Comparação manual\n");
    printf("Selecione uma das opções:\n" );
    scanf("%d", &opçao);

    printf("\n");

    switch (opçao)
    {
    case 1:
        printf("O nome dos estados são %s e %s", nomecidade, nomecidade2);
        break;
    case 2:
        printf("Os atributos usados foram: População\n");
        printf("Area\n"); 
        printf("Pib\n"); 
        printf("Pontos Turisticos\n"); 
        printf("Densidade populacional\n"); 
        printf("Pib/capita\n");
        printf("Super poder\n");
        break;
    case 3:
        printf("Valores de atributos:");
        printf("Os estados %s e %s contem: \n", nomecidade, nomecidade2);
        printf("População: %d - %d \n", populacao, populacao2);
        printf("Pib: %f - %f \n", pib, pib2);
        printf("Pontos Turísticos: %d - %d \n", pontoturistico, pontoturistico2);
        printf("Densidade Populacional: %f - %f \n", densidadepopulacional, densidadepopulacional2);
        printf("Pib/capita: %f - %f \n", pibpercapita, pibpercapita2);
        printf("Super Poder: %f - %f \n", superpoder, superpoder2);
        break;
    case 4:
        if( superpoder > superpoder2){
            printf("%s venceu \n", nomecidade);
        }else if (superpoder < superpoder2) {
            printf("%s venceu \n", nomecidade2);
        }else{
            printf("Empate!!");
        break;
        }

    case 5:
        printf("==== Escolha  primeiro atributo de comparação ====\n");
        printf("1 - População\n");
        printf("2 - Pib\n");
        printf("3 - Pontos Turísticos \n");
        printf("4 - Densidade Populacional\n");
        printf("5 - Pib/capita\n");
        printf("Escolha: \n");
        scanf("%d", &atributo1);

        printf("\n");

        printf("==== Escolha o segundo atributo de comparação ==== \n");
        for(int i = 1; i <= 5; i++){
            if (i != atributo1){
                switch (i){
                case 1: printf("1 - Popoulação\n ", i);break;
                   
                case 2: printf("2 - PIB\n", i);break;

                case 3: printf("Pontos Turísticos\n", i);break;

                case 4: printf("Densidade Populacional\n", i);break;

                case 5: printf("Pib por capita\n", i );break;

                default:
                    break;
                }
            }
        }
        printf("Escolha\n");
        scanf("%d", &atributo2);

        float valor1_carta1, valor2_carta1;
        switch (atributo1) {
            case 1: valor1_carta1 = populacao; break;
            case 2: valor1_carta1 = pib; break;
            case 3: valor1_carta1 = pontoturistico; break;
            case 4: valor1_carta1 = densidadepopulacional; break;
            case 5: valor1_carta1 = pibpercapita; break;
        }
        switch (atributo2) {
            case 1: valor2_carta1 = populacao; break;
            case 2: valor2_carta1 = pib; break;
            case 3: valor2_carta1 = pontoturistico; break;
            case 4: valor2_carta1 = densidadepopulacional; break;
            case 5: valor2_carta1 = pibpercapita; break;
        }

        // Pegando valores dos atributos para carta 2
        float valor1_carta2, valor2_carta2;
        switch (atributo1) {
            case 1: valor1_carta2 = populacao2; break;
            case 2: valor1_carta2 = pib2; break;
            case 3: valor1_carta2 = pontoturistico2; break;
            case 4: valor1_carta2 = densidadepopulacional2; break;
            case 5: valor1_carta2 = pibpercapita2; break;
        }
        switch (atributo2) {
            case 1: valor2_carta2 = populacao2; break;
            case 2: valor2_carta2 = pib2; break;
            case 3: valor2_carta2 = pontoturistico2; break;
            case 4: valor2_carta2 = densidadepopulacional2; break;
            case 5: valor2_carta2 = pibpercapita2; break;
        }

        // Mostrar os valores
        printf("\n==== VALORES COMPARADOS ====\n");
        printf("%s: %.2f e %.2f\n", nomecidade, valor1_carta1, valor2_carta1);
        printf("%s: %.2f e %.2f\n", nomecidade2, valor1_carta2, valor2_carta2);

        // Regra especial para densidade populacional (menor vence)
        int carta1_vitorias = 0;
        int carta2_vitorias = 0;

        if (atributo1 == 4) {
            (valor1_carta1 < valor1_carta2) ? carta1_vitorias++ : carta2_vitorias++;
        } else {
            (valor1_carta1 > valor1_carta2) ? carta1_vitorias++ : carta2_vitorias++;
        }

        if (atributo2 == 4) {
            (valor2_carta1 < valor2_carta2) ? carta1_vitorias++ : carta2_vitorias++;
        } else {
            (valor2_carta1 > valor2_carta2) ? carta1_vitorias++ : carta2_vitorias++;
        }

        // Soma total dos dois atributos para cada carta
        float soma1 = valor1_carta1 + valor2_carta1;
        float soma2 = valor1_carta2 + valor2_carta2;

        printf("\n==== RESULTADO ====\n");
        printf("Soma dos atributos:\n");
        printf("%s: %.2f\n", nomecidade, soma1);
        printf("%s: %.2f\n", nomecidade2, soma2);

        if (soma1 > soma2) {
            printf(">> %s venceu com maior soma de atributos!\n", nomecidade);
        } else if (soma2 > soma1) {
            printf(">> %s venceu com maior soma de atributos!\n", nomecidade2);
        } else {
            printf(">> Empate!\n");
        }

        break;


    default:
    printf("Opçao invalida, tente novamente com uma opção valida.");
        break;
    }
    
    printf("\n");
    
    printf("<<<FIM DO PROGRAMA>>>\n");

    return 0;
}
