#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2, codigoCarta1[4], codigoCarta2[4], cidade1[20], cidade2[20];
    int populacao1,populacao2, pontoTuristico1, pontoTuristico2;
    float areaTerritorial1, areaTerritorial2, pib1, pib2;

    printf("\n ---------------------- \n SUPER TRUNFO \n --------------------- \n\n");
    
   
    printf("1° Carta \nEstado (escolha uma letra entre A-H): ");
    scanf(" %c", &estado1); 

    printf("Crie um código para a carta (%c mais 2 digitos, ex: %c02): ", estado1, estado1);
    scanf("%s", codigoCarta1);

    getchar(); // limpa o buffer

    printf("Qual o nome da cidade? ");
    fgets(cidade1, 20, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove o caractere de nova linha (\n) adicionado pelo fgets

    printf("Quantos habitantes tem na cidade? ");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade em km2? ");
    scanf("%f", &areaTerritorial1);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Qual a quantidade de pontos turísticos? ");
    scanf("%d", &pontoTuristico1);
   
    
    printf("2° Carta\nEstado (escolha uma letra entre A-H): ");
    scanf(" %c", &estado2); 

    printf("Crie um código para a carta (%c mais 2 digitos, ex: %c02): ", estado2, estado2);
    scanf("%5s", codigoCarta2);

    getchar(); // limpa o buffer

    printf("Qual o nome da cidade? ");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove o caractere de nova linha (\n) adicionado pelo fgets

    printf("Quantos habitantes tem na cidade? ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade em km2? ");
    scanf("%f", &areaTerritorial2);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos? ");
    scanf("%d", &pontoTuristico1);

    //Exibição Final das Cartas cadastradas.
    printf("\n--- Descrição das cartas ---\n\n");

    printf("1° Carta: \n");
    printf("ESTADO: %c\n", estado1);
    printf("CÓDIGO: %s\n", codigoCarta1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2f km²\n", areaTerritorial1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n\n", pontoTuristico1);

    printf("2° Carta: \n");
    printf("ESTADO: %c\n", estado2);
    printf("CÓDIGO: %s\n", codigoCarta2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f km²\n", areaTerritorial2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n\n", pontoTuristico1);

    printf("====== FIM ======");

    return 0;
}
