
#include <stdio.h>

int main(){
// Variáveis para armazenar os dados da primeira carta
int atributo1, populacao1, pontosTuristicos1, dPopulacional1, comparacao;
float pib1, area1, dDemografica1, total1 = 0;
char nomePais[50];
// Variáveis para armazenar os dados da segunda carta
int atributo2, populacao2, pontosTuristicos2, dPopulacional2, opcaoMenu;
float pib2, area2, dDemografica2, total2 = 0;
char nomePais2[50]; 

// Inserindo dados para a primeira carta
printf("Digite os dados para a primeira carta:\n");
printf("Pais: ");
scanf(" %[^\n]", nomePais);
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
printf("Pais: ");
scanf(" %[^\n]", nomePais2);
printf("População: ");
scanf("%d", &populacao2);
printf("Área (em km²): ");
scanf("%f", &area2);
printf("PIB: ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

// Calculando densidade demografica
dDemografica1 = (float)populacao1 / area1;
dDemografica2 = (float)populacao2 / area2;

// Pedindo para o usuario escolher o primeiro atributo numerico que deseja comparar
printf("\n Escolha dois atributo númericos para comparar!\n");
  printf("Selecione o primeiro atributo que você deseja comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos:\n");
  printf("5. Densidade demográfica:\n"); 
  printf("Selecione: ");
  scanf("%d", &atributo1);

  //garantindo que o usuario não vai selecionar o mesmo atributo númerico, valor inserido pelo usuario retorna em 0!
  atributo1 == 1 ? total1 += populacao1 : 0;
  atributo1 == 2 ? total1 += area1 : 0;
  atributo1 == 3 ? total1 += pib1 : 0;
  atributo1 == 4 ? total1 += pontosTuristicos1 : 0;
  atributo1 == 5 ? total1 += dDemografica1 : 0;

  atributo1 == 1 ? total2 += populacao2 : 0;
  atributo1 == 2 ? total2 += area2 : 0;
  atributo1 == 3 ? total2 += pib2 : 0;
  atributo1 == 4 ? total2 += pontosTuristicos2 : 0;
  atributo1 == 5 ? total2 += dDemografica2 : 0;
// Pedindo para o usuario escolher o segundo atributo numerico que deseja comparar
  printf("\nSelecione o segundo atributo que você deseja comparar:\n");

  atributo1 != 1? printf("1. População \n") : 0;
  atributo1 != 2? printf("2. Área \n") : 0;
  atributo1 != 3? printf("3. PIB \n") : 0;
  atributo1 != 4? printf("4. Número de Pontos Turísticos \n") : 0;
  atributo1 != 5? printf("5. Densidade demográfica \n") : 0;
  printf("Selecione: ");
  scanf("%d", &atributo2);

  //garantindo que o usuario não vai selecionar o mesmo atributo númerico, valor inserido pelo usuario retorna em 0!
  atributo2 == 1 ? total1 += populacao2 : 0;
  atributo2 == 2 ? total1 += area2 : 0;
  atributo2 == 3 ? total1 += pib2 : 0;
  atributo2 == 4 ? total1 += pontosTuristicos2 : 0;
  atributo2 == 5 ? total1 += dDemografica2 : 0;

  atributo2 == 1 ? total2 += populacao2 : 0;
  atributo2 == 2 ? total2 += area2 : 0;
  atributo2 == 3 ? total2 += pib2 : 0;
  atributo2 == 4 ? total2 += pontosTuristicos2 : 0;
  atributo2 == 5 ? total2 += dDemografica2 : 0;

  //exibindo os atributos escolhidos e seus valores!
  printf("\n Exibindo os resultados:\n");
  printf("\nOs Paises são: %s , %s!\n", nomePais, nomePais2);
  atributo1 == 1 ? printf("Os atributos escolhido foram - População: (carta 1: %d), (carta 2: %d) e", populacao1, populacao2) : 0;
  atributo1 == 2 ? printf("Os atributos escolhido foram - Área: (carta 1: %.2f), (carta 2: %.2f) e", area1, area2) : 0;
  atributo1 == 3 ? printf("Os atributos escolhido foram - PIB: (carta 1: %.2f), (carta 2: %.2f) e", pib1, pib2) : 0;
  atributo1 == 4 ? printf("Os atributos escolhido foram - Pontos turisticos: (carta 1: %d), (carta 2: %d) e", pontosTuristicos1, pontosTuristicos2) : 0;
  atributo1 == 5 ? printf("Os atributos escolhido foram - Densidade Demografica: e(carta 1: %f), (carta 2: %f) e", dDemografica1, dDemografica2) : 0;

  atributo2 == 1 ? printf(" População: (carta 1: %d), (carta 2: %d)!\n", populacao1, populacao2) : 0;
  atributo2 == 2 ? printf(" Área: (carta 1: %.2f), (carta 2: %.2f)!\n", area1, area2) : 0;
  atributo2 == 3 ? printf(" PIB: (carta 1: %.2f), (carta 2: %.2f)!\n", pib1, pib2) : 0;
  atributo2 == 4 ? printf(" Pontos turisticos: (carta 1: %d), (carta 2: %d)!\n", pontosTuristicos1, pontosTuristicos2) : 0;
  atributo2 == 5 ? printf(" Densidade Demografica: (carta 1: %f), (carta 2: %f)!\n", dDemografica1, dDemografica2) : 0;
  
 //fazendo a soma dos atributos de cada carta
  printf("A soma dos atributos da primeira carta: %.2f\n", total1);
  printf("A soma dos atributos da segunda carta: %.2f\n", total2);
  
  //mostrando qual a carta vencedora
  if(total1 > total2){
    printf("%s venceu!", nomePais);
  } else if (total1 == total2){
    printf("Empate!");
  } else {printf("%s venceu!", nomePais2); }
  return 0;
}