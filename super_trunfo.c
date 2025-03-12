#include <stdio.h>

int main(){
    char Estado[20];
    char carta[20];
    char cidade[20];
    int População;
    float km²;
    float PIB;
    int turisticos;

    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a população: \n");
    scanf("%d", &População);

    printf("Digite a área em km²: \n");
    scanf("%f", &km²);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos);

    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", População);
    printf("Área em km²: %f\n", km²);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turisticos: %d\n", turisticos);
    return 0;


}
