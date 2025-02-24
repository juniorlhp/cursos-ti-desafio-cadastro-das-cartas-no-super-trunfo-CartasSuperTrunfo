#include <stdio.h>

int main(){
 //declarando variaveis para primeira carta   
 int cdgcidade1, populacao1, nPontosTuristico1;
 char nomeCidade1[50], estado1;
 float pib1, area1;
 //declarando variaveis para segunda carta   
 int cdgcidade2, populacao2, nPontosTuristico2;
 char nomeCidade2[50], estado2;
 float pib2, area2;

 //Entrada de dados: Cadastrando a primeira carta:
printf("***Seja bem vindo ao Super-Trunfo*** \n");
printf("\n Cadastre a primeira carta:\n");

printf("Insira a letra do estado (ex: A a H):\n");
scanf(" %c", &estado1);
printf("Insira o código da cidade (ex: 01 a 04):\n");
scanf("%d", &cdgcidade1);
printf("Informe o nome da cidade:\n");
scanf(" %[^\n]", nomeCidade1);
printf("Informe a população dessa cidade:\n");
scanf("%d", &populacao1);
printf("Informe a Área dessa cidade:\n");
scanf("%f", &area1);
printf("Informe o PIB dessa cidade:\n");
scanf("%f", &pib1);
printf("Informe o número de pontos turísticos que a cidade possui:\n");
scanf("%d", &nPontosTuristico1);
 
//Entrada de dados: Cadastrando a segunda carta
printf("\n Agora cadastre a segunda carta:\n");

printf("Insira a letra do estado (ex: A a H):\n");
scanf(" %c", &estado2);
printf("Insira o código da cidade (ex: 01 a 04):\n");
scanf("%d", &cdgcidade2);
printf("Informe o nome da cidade:\n");
scanf(" %[^\n]", nomeCidade2);
printf("Informe a população dessa cidade:\n");
scanf("%d", &populacao2);
printf("Informe a Área dessa cidade:\n");
scanf("%f", &area2);
printf("Informe o PIB dessa cidade:\n");
scanf("%f", &pib2);
printf("Informe o número de pontos turísticos que a cidade possui:\n");
scanf("%d", &nPontosTuristico2);

//Saída de Dados: exibindo os atributos da primeira carta
printf("\n Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código da cidade: %c0%d\n", estado1, cdgcidade1);
printf("Nome da cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de Pontos Turísticos: %d\n", nPontosTuristico1);

//Saída de Dados: exibindo os atributos da segunda carta
printf("\n Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código da cidade: %c0%d\n", estado2, cdgcidade2);
printf("Nome da cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", nPontosTuristico2);

    return 0;
}