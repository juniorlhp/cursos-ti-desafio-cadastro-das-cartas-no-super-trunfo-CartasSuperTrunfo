#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, dPopulacional1;
    double PIBcap1;

    // Variáveis para armazenar os dados da segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, dPopulacional2, pib2;
    double PIBcap2;

    //Entrada de dados: Cadastrando a primeira carta:
    printf("***Seja bem vindo ao Super-Trunfo*** \n");
    printf("\n Cadastre a primeira carta:\n");

    printf("Insira a letra do estado (ex: A a H):\n");
    scanf(" %c", &estado1);
    printf("Insira o código da cidade (ex: 01 a 04):\n");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade1);  
    printf("Informe a população dessa cidade:\n");
    scanf("%d", &populacao1);
    printf("Informe a Área (em km²):\n");
    scanf("%f", &area1);
    printf("Informe o PIB dessa cidade:\n");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);
    
    //Entrada de dados: Cadastrando a segunda carta:
    printf("\n Cadastre a segunda carta:\n");

    printf("Insira a letra do estado (ex: A a H):\n");
    scanf(" %c", &estado2);
    printf("Insira o código da cidade (ex: 01 a 04):\n");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade2);  
    printf("Informe a população dessa cidade:\n");
    scanf("%d", &populacao2);
    printf("Informe a Área (em km²):\n");
    scanf("%f", &area2);
    printf("Informe o PIB dessa cidade:\n");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Calculando densidade populacional: dividindo a populacao por area (garantindo n° de pontos flutuantes)
    dPopulacional1 = (float)populacao1 / area1;
    dPopulacional2 = (float)populacao2 / area2;
     
    // Multiplicando o PIB per Cap por bilhão e dividindo por população
    PIBcap1 = (pib1 * 1000000000) / populacao1;
    PIBcap2 = (pib2 * 1000000000) / populacao2;

    // Exibindo as informações da 1° carta                                                              
    printf("\n Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da cidade: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", dPopulacional1);
    printf("PIB per capita: %.2lf reais\n", PIBcap1);

    // Exibindo as informações da 2° carta
    printf("\n Carta 1: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da cidade: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", dPopulacional2);
    printf("PIB per capita: %.2lf reais\n", PIBcap2);

    return 0;
}
