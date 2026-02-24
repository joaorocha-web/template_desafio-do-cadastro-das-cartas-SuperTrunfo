#include <stdio.h>
#include <string.h>

int main() {
    unsigned long int populacao1, populacao2;
    int pontoTuristico1, pontoTuristico2;
    char estado1, estado2, codigoCarta1[4], codigoCarta2[4], cidade1[20], cidade2[20];
    float areaTerritorial1, areaTerritorial2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2, perCapita1, perCapita2, superPoder1, superPoder2;

    printf("\n ---------------------- \n SUPER TRUNFO \n --------------------- \n\n");
    
   //Entrada de Dados para a primeira carta

    printf("1° Carta \nEstado (escolha uma letra entre A-H): ");
    scanf(" %c", &estado1); 

    printf("Crie um código para a carta (%c mais 2 digitos, ex: %c02): ", estado1, estado1);
    scanf("%s", codigoCarta1);

    getchar(); // limpa o buffer

    printf("Qual o nome da cidade? ");
    fgets(cidade1, 20, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o caractere de nova linha (\n) adicionado pelo fgets

    printf("Quantos habitantes tem na cidade? ");
    scanf("%lu", &populacao1);

    printf("Qual a área da cidade em km2? ");
    scanf("%f", &areaTerritorial1);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turísticos? ");
    scanf("%d", &pontoTuristico1);
   

    //Entrada de dados para a segunda carta

    printf("2° Carta\nEstado (escolha uma letra entre A-H): ");
    scanf(" %c", &estado2); 

    printf("Crie um código para a carta (%c mais 2 digitos, ex: %c02): ", estado2, estado2);
    scanf("%s", codigoCarta2);

    getchar(); // limpa o buffer

    printf("Qual o nome da cidade? ");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o caractere de nova linha (\n) adicionado pelo fgets

    printf("Quantos habitantes tem na cidade? ");
    scanf("%lu", &populacao2);

    printf("Qual a área da cidade em km2? ");
    scanf("%f", &areaTerritorial2);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos? ");
    scanf("%d", &pontoTuristico2);


    // Cáculdo do PIB per capita e da densidade populacional da primeira carta
    perCapita1 = pib1/populacao1;
    densidadePopulacional1 = populacao1/areaTerritorial1;

    // Cáculdo do PIB per capita e da densidade populacional da segunda carta
    perCapita2 = pib2/populacao2;
    densidadePopulacional2 = populacao2/areaTerritorial2;

    // Cálculo do super poder de cada carta
    superPoder1 = (float) populacao1 + areaTerritorial1 + pib1 + (float) pontoTuristico1 + perCapita1 + (1/densidadePopulacional1);
    superPoder2 = (float) populacao2 + areaTerritorial2 + pib2 + (float) pontoTuristico2 + perCapita2 + (1/densidadePopulacional2);


    //Exibição Final das Cartas cadastradas.
    printf("\n--- Descrição das cartas ---\n\n");

    printf("1° Carta: \n");
    printf("ESTADO: %c\n", estado1);
    printf("CÓDIGO: %s\n", codigoCarta1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %lu\n", populacao1);
    printf("ÁREA: %.2f km²\n", areaTerritorial1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", pontoTuristico1);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional1);
    printf("PIB PER CAPITA: %.2f\n", perCapita1);
    printf("SUPER PODER: %.2f \n\n", superPoder1);
    
    printf("2° Carta: \n");
    printf("ESTADO: %c\n", estado2);
    printf("CÓDIGO: %s\n", codigoCarta2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("ÁREA: %.2f km²\n", areaTerritorial2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n", pontoTuristico1);
    printf("DENSIDADE POPULACIONAL: %.2f\n", densidadePopulacional2);
    printf("PIB PER CAPITA: %.2f\n", perCapita2);
    printf("SUPER PODER: %.2f \n\n", superPoder2);

    //Comparação das cartas; 
    printf("----- COMPARAÇÃO DAS CARTAS ----- \n\n");
    printf("POPULAÇÃO: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("AREA: Carta 1 venceu (%d)\n", areaTerritorial1 > areaTerritorial2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("PONTOS TURÍSTICOS: Carta 1 venceu (%d)\n", pontoTuristico1 > pontoTuristico2);
    printf("DENSIDADE POPULACIONAL: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB PER CAPITA: Carta 1 venceu (%d)\n", perCapita1 > perCapita2);
    printf("SUPER PODER: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    printf("====== FIM ======");

    return 0;
}
