#include <stdio.h>

int main(){
    //declarando as variaveis
    int rainha = 0, bispo, torre = 0;
    int cavalo = 0;
    
    //mover a torre 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    while (torre < 5)
    {
        printf("Direita\n"); //imprimindo a direção do movimento
        torre++;
    }

    //mover a rainha 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    do
    {
        printf("Esquerda\n"); // imprimindo a direção do movimento
        rainha++;
    } while (rainha < 8);

    //mover o bispo 5 casas na diagonal para o lado esquerdo
    printf("\nMovimento do Bispo:\n");
    for (bispo = 0; bispo < 5; bispo++)
    {
        printf("Cima Esquerda\n"); //imrpimindo a direção do movimento
    }

    //movendo o cavalo em L com estrutura aninhada
    printf("\nMovimento do Cavalo:\n");
    while (cavalo < 1)
   {
    for (int k = 0; k < 2; k++)
    {
        printf("Baixo\n"); //imprimindo a direção dos primeiros movimentos 2x usando for
    }
        printf("Esquerda\n"); //imprimindo o terceiro movimento utilizando while
        cavalo++;
   }
    return 0;
}