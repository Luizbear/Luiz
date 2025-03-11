#include <stdio.h>

int main(){
    char Estado[20];
    char Código da carta[20];
    char Nome da cidade[20];
    int População;
    float Área em km²;
    float PIB;
    int Número de pontos turisticos;

    printf("Digite o nome do estado:");
    scanf("%s", &Estado);
    printf("Digite o código da carta:");
    scanf("%s", &Código da carta);
    printf("Digite o nome da cidade:");
    scanf("%s", &Nome da cidade);
    printf("Digite a população:");
    scanf("%d", &População);
    printf("Digite a área em km²:");
    scanf("%f", &Área em km³);
    printf("Digite o PIB:");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turisticos:");
    scanf("%d", &Número de pontos turisticos);

    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Código da carta);
    printf("Nome da cidade: %s\n", Nome da cidade);
    printf("População: %d\n", População);
    printf("Área em km²: %f\n", Área em km²);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turisticos: %d\n", Número de pontos);
    return 0;


}
