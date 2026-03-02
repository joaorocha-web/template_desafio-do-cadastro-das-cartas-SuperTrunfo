#include <stdio.h>
#include <string.h>

int main() {
    unsigned long int populacao1, populacao2;
    int pontoTuristico1, pontoTuristico2, opcao;
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

    // Menu interativo para comparação das cartas
    printf("----- COMPARAÇÃO DAS CARTAS ----- \n\n");

    printf("Escolha o atributo que deseja comparar:\n");
    printf("1- POPULAÇÃO\n");
    printf("2- ÁREA\n");
    printf("3- PIB\n");
    printf("4- PONTOS TURÍSTICOS\n");
    printf("5- DENSIDADE POPULACIONAL\n");
    printf("6- PIB PER CAPITA\n");
    printf("7- SUPER PODER\n");
    printf("Opção: ");
    scanf("%d", &opcao); // escolha do atributo que será comparado

    printf("=== Resultado === \n\n");
    switch (opcao){
        case 1:
            if(populacao1 > populacao2){
                printf("POPULAÇÃO: Carta %s venceu!\n\n", cidade1);
            } else if(populacao2 > populacao1) {
                printf("POPULAÇÃO: Carta %s venceu!\n\n", cidade2);
            } else {
                printf("POPULAÇÃO: Empate!\n\n");
            }
            break;
        case 2: 
            if(areaTerritorial1 > areaTerritorial2){
                printf("ÁREA: Carta %s venceu!\n\n", cidade1);
            } else if(areaTerritorial2 > areaTerritorial1) {
                printf("ÁREA: Carta %s venceu!\n\n", cidade2);
            } else {
                printf("ÁREA: Empate!\n\n");
            }
            break;
        case 3:
            if(pib1 > pib2){
                printf("PIB: Carta %s venceu!\n\n", cidade1);
            } else if(pib2 > pib1) {
                printf("PIB: Carta %s venceu!\n\n", cidade2);
            } else {
                printf("PIB: Empate!\n\n");
            }

            break;
        case 4: 
            if(pontoTuristico1 > pontoTuristico2){
                printf("PONTOS TURÍSTICOS: Carta %s venceu!\n\n", cidade1);
            } else if(pontoTuristico2 > pontoTuristico1) {
                printf("PONTOS TURÍSTICOS: Carta %s venceu!\n\n", cidade2);
            } else {
                printf("PONTOS TURÍSTICOS: Empate!\n\n");
            }

            break;
        case 5:
            if(densidadePopulacional1 < densidadePopulacional2){
                printf("DENSIDADE POPULACIONAL: Carta %s venceu!\n\n", cidade1);
            } else if(densidadePopulacional2 < densidadePopulacional1) {
                printf("DENSIDADE POPULACIONAL: Carta %s venceu!\n\n", cidade2);
            } else {
                printf("DENSIDADE POPULACIONAL: Empate!\n\n");
            }

            break;
        case 6: 
            if(perCapita1 > perCapita2){
                printf("PIB PER CAPITA: Carta %s venceu!\n\n", cidade1);
            } else if(perCapita2 > perCapita1) {
                printf("PIB PER CAPITA: Carta %s venceu!\n\n", cidade2);
            } else {
                printf("PIB PER CAPITA: Empate!\n\n");
            }

            break;
        case 7:
            if(superPoder1 > superPoder2){
                printf("SUPER PODER: Carta %s venceu!\n\n", cidade1);
            } else if(superPoder2 > superPoder1) {
                printf("SUPER PODER: Carta %s venceu!\n\n", cidade2);
            } else {
                printf("SUPER PODER: Empate!\n\n");
            }
            break;
        default:
            printf("Opção inválida");
            
    }

    printf("====== FIM ======");

    return 0;
}
