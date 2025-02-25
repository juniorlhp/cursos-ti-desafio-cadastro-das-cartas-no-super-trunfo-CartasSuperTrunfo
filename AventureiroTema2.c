#include <stdio.h>

int main(){
    // Variáveis para armazenar os dados da primeira carta
    int comparacao, populacao1, pontosTuristicos1, dPopulacional1;
    float pib1, area1, dDemografica1;
    char nomePais[50];
    // Variáveis para armazenar os dados da segunda carta
    int populacao2, pontosTuristicos2, dPopulacional2;
    float pib2, area2, dDemografica2;
    char nomePais2[50];

// Inserindo dados para a primeira carta
printf("Digite os dados para a primeira carta:\n");
printf("Pais: ");
scanf("%s", nomePais);
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
scanf("%s", nomePais2);
printf("População: ");
scanf("%d", &populacao2);
printf("Área (em km²): ");
scanf("%f", &area2);
printf("PIB: ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

// Calculando densidade 
dDemografica1 = (float)populacao1 / area1;
dDemografica2 = (float)populacao2 / area2;

// Pedindo para o usuario fazer a comparação das cartas
printf("\n****** Compare as cartas! ***\n");
  printf("Selecione o atributo que você deseja comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de Pontos Turísticos:\n");
  printf("5. Densidade demográfica:\n"); //inverso
  scanf("%d", &comparacao);
  printf("Escolha:%d \n", comparacao);

  
switch (comparacao)
{
case 1:
    if(populacao1 > populacao2){
        printf("População %s: %d habitantes\n", nomePais, populacao1);
        printf("População %s: %d habitantes\n", nomePais2, populacao2);
        printf("%s venceu! \n", nomePais);

    } else if(populacao1 == populacao2){
        printf("População %s: %d habitantes\n", nomePais, populacao1);
        printf("População %s: %d habitantes\n", nomePais2, populacao2);
        printf("Empate! \n");
    } else { printf("População %s: %d habitantes\n", nomePais, populacao1);
        printf("População %s: %d habitantes\n", nomePais2, populacao2);
        printf("%s venceu! \n", nomePais2); }
    break;

case 2:
    if (area1 > area2)
    { printf("Área %s: %.2f km² \n", nomePais, area1);
        printf("Área %s: %.2f km² \n", nomePais2, area2);
        printf("%s venceu! \n", nomePais);
    } else if(area1 == area2){
        printf("Área %s: %.2f km² \n", nomePais, area1);
        printf("Área %s: %.2f km² \n", nomePais2, area2);
        printf("Empate! \n");
    } else {printf("Área %s: %.2f km² \n", nomePais, area1);
            printf("Área %s: %.2f km² \n", nomePais2, area2);
            printf("%s venceu! \n", nomePais2); }
    break;

case 3:
if (pib1 > pib2)
    { printf("PIB %s: %.2f \n", nomePais, pib1);
        printf("PIB %s: %.2f \n", nomePais2, pib2);
        printf("%s venceu! \n", nomePais);
    } else if(area1 == area2){
        printf("PIB %s: %.2f \n", nomePais, pib1);
        printf("PIB %s: %.2f \n", nomePais2, pib2);
        printf("Empate! \n");
    } else {printf("PIB %s: %.2f \n", nomePais, pib1);
            printf("PIB %s: %.2f \n", nomePais2, pib2);
            printf("%s venceu! \n", nomePais2); }
    break;

 case 4:
 if (pontosTuristicos1 > pontosTuristicos2)
    { printf("Número de pontos turísticos  %s: %d \n", nomePais, pontosTuristicos1);
        printf("Número de pontos turísticos  %s: %d \n", nomePais2, pontosTuristicos2);
        printf("%s venceu! \n", nomePais);
    } else if(area1 == area2){
        printf("Número de pontos turísticos  %s: %d \n", nomePais, pontosTuristicos1);
        printf("Número de pontos turísticos  %s: %d \n", nomePais2, pontosTuristicos2);
        printf("Empate! \n");
    } else {printf("Número de pontos turísticos  %s: %d \n", nomePais, pontosTuristicos1);
            printf("Número de pontos turísticos  %s: %d \n", nomePais2, pontosTuristicos2);
            printf("%s venceu! \n", nomePais2); }
    break;   

case 5:
if (dDemografica1 > dDemografica2)
    { printf("Densidade demográfica %s: %.2f \n", nomePais, dDemografica1);
        printf("Densidade demográfica %s: %.2f \n", nomePais2, dDemografica2);
        printf("%s venceu! \n", nomePais2);
    } else if(dDemografica1 == dDemografica2){
        printf("Densidade demográfica %s: %.2f \n", nomePais, dDemografica1);
        printf("Densidade demográfica %s: %.2f \n", nomePais2, dDemografica2);
        printf("Empate! \n");
    } else {printf("Densidade demográfica %s: %.2f \n", nomePais, dDemografica1);
            printf("Densidade demográfica %s: %.2f \n", nomePais2, dDemografica2);
            printf("%s venceu! \n", nomePais); }
    break;   
    default :
    printf ("Valor invalido!\n");
}

  return 0;
}