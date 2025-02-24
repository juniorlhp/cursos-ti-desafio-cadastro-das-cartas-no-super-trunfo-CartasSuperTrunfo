#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int pontosTuristicos1; 
    float area1, pib1, dPopulacional1, PIBcap1, superPoder1, inversao1;
    signed long int populacao1;

    // Variáveis para armazenar os dados da segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int pontosTuristicos2;
    float area2, dPopulacional2, pib2, PIBcap2, superPoder2, inversao2;
    signed long int populacao2;

    // Inserindo dados para a primeira carta
    printf("Digite os dados para a primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);  
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Inserindo dados para a segunda carta
    printf("\nDigite os dados para a segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);    
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculando densidade populacional, PIB per capita e superPoder
    dPopulacional1 = (float)populacao1 / area1;
    dPopulacional2 = (float)populacao2 / area2;
    
    PIBcap1 = (pib1 * 1000000000) / populacao1;
    PIBcap2 = (pib2 * 1000000000) / populacao2;
    
    inversao1 = 1 / (dPopulacional1 + 1);
    inversao2 = 1 / (dPopulacional1 + 1);

    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + PIBcap1 + inversao1;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + PIBcap2 + inversao2;

    // Exibindo as informações da 1° carta
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", dPopulacional1);
    printf("PIB per capita: %.2f reais\n", PIBcap1);
    printf("Super Poder: %.2f\n", superPoder1);

     // Exibindo as informações da 2° carta

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", dPopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBcap2);
    printf("Super Poder: %2.f\n", superPoder2);

  //Comparando as cartas
printf("\n=========Comparando as Cartas=========\n");

printf("População: A carta (%d) venceu!\n", (populacao2 > populacao1)+1);
printf("Área: A carta (%d) venceu!\n", (area2 > area1)+1);
printf("PIB: A carta (%d) venceu!\n", (pib2 > pib1)+1);
printf("Pontos Turísticos: A carta (%d) venceu!\n", (pontosTuristicos2 > pontosTuristicos1)+1);
printf("Densidade Populacional: A carta (%d) venceu!\n", (dPopulacional1 > dPopulacional2)+1);
printf("PIB per Capita: A carta (%d) venceu!\n", (PIBcap2 > PIBcap1)+1);
printf("Super Poder: A carta (%d) venceu!\n", (superPoder2 > superPoder1)+1);


    return 0;
}
