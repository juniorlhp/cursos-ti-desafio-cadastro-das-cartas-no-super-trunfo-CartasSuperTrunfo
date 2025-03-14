#include <stdio.h>

#define LINHAS 10 //DEFININDO O NÚMERO DE LINHAS
#define COLUNAS 10 //DEFININDO O NÚMERO DE COLUNAS
#define navio 3 //DEFININDO O TAMANHO DO NAVIO

int main(){
    char linha[10] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J'};
    int coluna[COLUNAS], soma = 0;
    int tabuleiro [LINHAS][COLUNAS];

    //IMPRIMINDO AS LINHAS DE 'A' a 'J'
    printf("TABULEIRO BATALHA NAVAL\n");
    printf(" ");
    for (int i = 0; i < LINHAS; i++){
        printf(" %c", linha[i]);
    }

    printf("\n"); //PULANDO UMA LINHA PARA ORGANIZAR
    //TORNANDO TODA A MATRIZ 0 PARA REPRESENTAR A ÁGUA 
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++)
    {
        tabuleiro[i][j] = 0;
    }   
    }

    //UTILIZANDO LOOPS ANINHADOS PARA EXIBIR OS NAVIOS HORIZONTALMENTE E OUTRO VERTICALMENTE
    for (int i = 0; i < 3; i++){ 
        tabuleiro[i][4] = navio;    //VERTICAL (E1, E2, E3)
        for (int j = 5; j < 8; j++)
        {
         tabuleiro[5][j] = navio;    //HORIZONTAL (G6, H6, I6)
        }
    }

    //UTILIZANDO LOOPS ANINHADOS PARA EXIBIR OS NAVIOS EM POSIÇÃO DIAGONAL
    for (int i = 0; i < 3; i++){
        tabuleiro[i][i] = navio;    //(1A, 2B, 3C)
        for (int j = 9; j > 6; j--)
        {
            tabuleiro[j][j] = navio; //(10J., 9I, 8H)
        }
    }

    //IMPRIMINDO O TABULEIRO
    for (int i = 0; i < LINHAS; i++){
        soma++; //INCREMENTANDO O VALOR DE SOMA EM 1
        coluna[i] = soma; //ARMAZENANDO O VALOR DE SOMA EM [I] DO ARRAY 'COLUNA'
        printf("%d ", coluna[i]);
        for (int j = 0; j < COLUNAS; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}