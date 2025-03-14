#include <stdio.h>

int main(){
    //CRIANDO AS LINHAS, A COLUNA E O TABULEIRO
    char linha[10] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J'};
    int colunas[10], soma = 0;
    int  tabuleiro[10][10];

    printf("TABULEIRO BATALHA NAVAL\n");
    //IMPRIMINHO AS LINHAS DO TABULEIRO
    printf("  ");
    for (int i = 0; i < 10; i++){
        printf(" %c", linha[i]);
    }

    //TORNANDO TODA A MATRIZ EM 0 PARA REPRESENTAR A ÁGUA 
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
    //ADICIONANDO UM NAVIO REPRESENTADO POR '3' DE TAMANHO 3 VERTICALMENTE EM (E2, E3, E4)
    tabuleiro[3][4] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[1][4] = 3;
    //ADICIONANDO UM NAVIO REPRESENTADO POR '3' DE TAMANHO 3 HORIZONTALMENTE EM (D7, E7, F7)
    tabuleiro[6][2] = 3;
    tabuleiro[6][3] = 3;
    tabuleiro[6][4] = 3;

    //IMPRIMINDO O TABULEIRO
    printf("\n ");
    for (int i = 0; i < 10; i++){
        soma++;
        colunas[i] = soma;
        printf("%d ", colunas[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n ");
    }
    
    

    
    return 0;
}