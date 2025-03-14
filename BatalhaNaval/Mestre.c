#include <stdio.h>

#define LINHAS 10 // DEFININDO O NÚMERO DE LINHAS
#define COLUNAS 10 // DEFININDO O NÚMERO DE COLUNAS

int main(){
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS] = {0};
    int coluna[COLUNAS], soma = 0;

    //PREENCHENDO O TABULEIRO COM O CONE
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            //CONE
            if ((i == 0 && j == 4) || 
                (i == 1 && (j >= 3 && j <= 5)) || 
                (i == 2 && (j >= 2 && j <= 6))) {
                tabuleiro[i][j] = 5; //USANDO 5 PRA REPRESENTAR O CONE
            }
        }
    }

    //PREENCHENDO O TABULEIRO COM O OCTAEDRO
    for (int i = 0; i < 5; i++) {
        for (int j = 4; j < 7; j++) {
            //OCTAEDRO 
            if((i == 1 || i == 3) && (j == 5 )){
                tabuleiro[j][i] = 3;
            }
            if(i == 2 && (j == 4 || j == 5 || j == 6)){
                tabuleiro[j][i] = 3; //USANDO 3 PRA REPRESENTAR O OCTAEDRO
            }
        }
    }

    //PREENCHENDO O TABULEIRO COM A CRUZ
    for (int i = 7; i <= 9; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            //CRUZ
            if ((i == 8 && j >= 2 && j <= 6) || //LINHA HORIZONTAL DA CRUZ
                (j == 4)) { //LINHA VERTICAL DA CRUZ
                tabuleiro[i][j] = 1; //USANDO 1 PRA REPRESENTAR A CRUZ

            }
        }
    }

    //IMPRIMINDO AS LINHA DE 'A' a 'J'
    printf("  "); 
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }  
    printf("\n");
    
    //IMPRIMINDO O TABULEIRO
    for (int i = 0; i < LINHAS; i++){
        soma++; //INCRIMENTANDO O VALOR DE SOMA EM 1
        coluna[i] = soma;   //ARMAZENANDO O VALOR DE SOMA EM [I] DO ARRAY 'COLUNA'
        printf("%d ", coluna[i]);
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }  
        printf("\n");   //PULANDO UMA LINHA PRA ORGANIZAR
    }
    
    return 0;
}