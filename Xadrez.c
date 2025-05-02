#include <stdio.h>

int main(){

    int i, j, k = 1;
    
  //Movimentação da Rainha 8 casas

  printf("Quantas casas a rainha andará\n");
  scanf("%d", &i);
    for (int i = 1; i < 8; i++)
    {
        printf("Direita\n"); //Direção do movimento
    }


    // Bispo Movimento na diagonal!

    printf("Quantas casas o Bispo andará\n");
    scanf("%d", &j);

    do
    {
        printf("Direita/cima\n");
        j++;
    } while (j < 5);


        int movimentocompleto = 1;
    

    printf("Quantas casas o cavalo andará\n");
    scanf ("%d", &movimentocompleto);

    //int movimentocompleto = 1; controlar movimento em L (Flag).

    while (movimentocompleto--)
    {
    for (int movimentocompleto = 1; movimentocompleto < 2; movimentocompleto++)
    {
        printf("Cima\n"); //Imprime "cima" duas vezes
    }
    printf("Direita\n"); //Imprime "Direita" uma vez

    }

    printf("Quantas casas a Torre andará\n");
    scanf("%d", &k);

    //Torre mover 5 casas

    while (k < 5);
    {
        printf("Direita\n");
        printf("%d\n", k);
        k++;}

    

    return 0;

}
    
