#include <stdio.h>

int main() {

    // Variáveis para armazenar os dados da primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int pontosTuristicos1; 
    float area1, pib1, dPopulacional1, PIBcap1;
    signed long int populacao1;

    // Variáveis para armazenar os dados da segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int pontosTuristicos2;
    float area2, dPopulacional2, pib2, PIBcap2;
    signed long int populacao2;

    // Inserindo dados para a primeira carta
    printf("Digite os dados para a primeira carta:\n");
    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B04): ");
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

    // Calculando densidade populacional e PIB per capita
    dPopulacional1 = (float)populacao1 / area1;
    dPopulacional2 = (float)populacao2 / area2;
    
    PIBcap1 = (pib1 * 1000000000) / populacao1;
    PIBcap2 = (pib2 * 1000000000) / populacao2;

    //Exibindo o resultado de Densidade populacional e PIB per Capita
    printf("\n======Carta 1=====\n");
    printf("Densidade populacional: %.2f hab/km²\n", dPopulacional1);
    printf("PIB per capita: %.2f reais\n", PIBcap1);
    
    printf("\n======Carta 2 =====\n");
    printf("Densidade populacional: %.2f hab/km²\n", dPopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBcap2);

   
    //Comparando um atributo escolhido (população):
    printf("\n=====Comparando o atributo selecinado!=====");
    printf("\n(Atributo: População):\n");
    
    printf("Carta1: %s : %d habitantes\n", nomeCidade1, populacao1);
    printf("Carta2: %s : %d habitantes\n", nomeCidade2, populacao2);

    if(populacao1 == populacao2){
     printf("Resultado: cartas possuem o mesmo valor!\n");
    } else if(populacao1 > populacao2){
     printf("Resultado: Carta 1 (%s) Venceu!\n", nomeCidade1);
    } else { printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);}
    

return 0;
}