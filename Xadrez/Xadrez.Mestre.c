#include <stdio.h>

void recursivoT(int Torre){
    if (Torre > 5){
    printf("Direita\n");
    recursivoT(Torre - 1);
}
}

void recursivoB(int Bispo){
    if (Bispo < 5){
    printf("Cima Esquerda\n");
    recursivoB(Bispo + 1);
}
}

void recursivoR(int Rainha){
    if (Rainha < 8){
    printf("Esquerda\n");
    recursivoR(Rainha + 1);
}
}

int main(){
    int torre = 10, bispo = 0, rainha = 0;
    int cavalo = 0;

    printf("\nMovimento da Torre: \n");
    recursivoT(torre);

    printf("\nMovimento do Bispo: \n");
    recursivoB(bispo);

    printf("\nMovimento da Rainha: \n");
    recursivoR(rainha);

    //movendo o cavalo em L com estrutura aninhada
    printf("\nMovimento do Cavalo:\n");
    while (1)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n"); //imprimindo a direção dos primeiros movimentos 2x usando for
        } printf("Baixo\n"); //imprimindo o terceiro movimento utilizando while
        break; // Sai do loop quando ler o movimento em L
    
        
    }
    //mover o bispo 5 casas na diagonal para o lado direito
   printf("\nMovimento do segundo Bispo\n");
   for (int j = 0; j < 1; j++)
   {
    for (int k = 0; k < 5; k++)
    {
        printf("Cima Direita\n"); // imprimindo a direção do movimento
    }
    
   }
   
    return 0;
} 
