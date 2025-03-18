#include <stdio.h>

int main(){
    char Estado1[20], Estado2[20];
    char carta1[20], carta2 [20];
    char cidade1[20], cidade2[20];
    int População1, População2;
    float km²1, Km²2;
    float PIB1, PIB2;
    int turisticos1, turisticos2;

    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &População1);

    printf("Digite a área em km²: \n");
    scanf("%f", &km²1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos1);

    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", População1);
    printf("Área em km²: %f\n", km²1);
    printf("PIB: %f\n", PIB1);
    printf("Número de pontos turisticos: %d\n", turisticos1);

    printf("Digite o nome do estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &População2);

    printf("Digite a área em km²: \n");
    scanf("%f", &Km²2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos2);

    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", População2);
    printf("Área em km²: %f\n", Km²2);
    printf("PIB: %f\n", PIB2);
    printf("Número de pontos turisticos: %d\n", turisticos2);


    return 0;


}
