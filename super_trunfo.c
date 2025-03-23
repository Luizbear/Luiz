#include <stdio.h>

int main(){
    char carta1[4], carta2 [4];
    char estado1 = 'A', estado2 = 'B';
    char Cidade1[20], cidade2[20];
    int População1, População2;
    float km²1, Km²2;
    float PIB1, PIB2;
    int turisticos1, turisticos2;

    printf("BEM VINDO AO SUPER TRUNFO \n");

    printf("Digite um codigo para a carta: \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a população: \n");
    scanf("%d", &População1);

    printf("Digite a área em km²: \n");
    scanf("%f", &km²1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos1);

    printf("Código da carta: %s\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Área em km²: %f\n", km²1);
    printf("PIB: %f\n", PIB1);
    printf("Número de pontos turisticos: %d\n", turisticos1);

    float densidadepc1 = População1 / km²1;
    float Pibpc1 = PIB1 / População1 * 10000000000;
    printf("Densidade Populacional: %.2f\n", População1 / km²1);
    printf("PIB Per Capita: %.2f\n", PIB1 / População1);


  
    printf("Digite o código da carta: \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &População2);

    printf("Digite a área em km²: \n");
    scanf("%f", &Km²2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos2);

   
    printf("Código da carta: %s\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", População2);
    printf("Área em km²: %f\n", Km²2);
    printf("PIB: %f\n", PIB2);
    printf("Número de pontos turisticos: %d\n", turisticos2);

    float densidadepc2 = População2 / Km²2;
    float Pibpc2 = PIB2 / População2 * 10000000000;
    printf("Densidade Populacional: %.2f\n", População2 / Km²2);
    printf("PIB Per Capita: %.2f\n", PIB2 / População2);

    int input, input2, resultado, resultado2;
    int atributo1_1, atributo1_2, atributo2_1, atributo2_2;
    char escolhido1[50]; 
    char escolhido2[50];
    printf("[1] Populacao\n[2] Area\n[3] PIB\n[4] Pontos turisticos\n[5] Densidade populacional\n[6] PIB PER CAPITA\n");
    scanf("%d", &input);
    
    
    switch (input) {
        case 1:
            printf("Comparacao de Populacao:\n%s: %d vs %s: %d\n", Cidade1, População1, cidade2, População2);
            resultado = (População1 > População2) ? 1 : 2;
            atributo1_1 = População1;
            atributo2_1 = População2;
            sprintf(escolhido1, "Populacao");
            break;
        case 2:
            printf("Comparacao de Area:\n%s: %.2f km² vs %s: %.2f km²\n", Cidade1, km²1, cidade2, Km²2);
            resultado = (km²1 > Km²2) ? 1 : 2;
            atributo1_1 = km²1;
            atributo2_1 = Km²2;
            sprintf(escolhido1, "Area");
            break;
        case 3:
            printf("Comparacao de PIB:\n%s: %.2f bilhoes vs %s: %.2f bilhoes\n", Cidade1, PIB1, cidade2, PIB2);
            resultado = (PIB1 > PIB2) ? 1 : 2;
            atributo1_1 = PIB1;
            atributo2_1 = PIB2;
            sprintf(escolhido1, "PIB");
            break;
        case 4:
            printf("Comparacao de Pontos turisticos:\n%s: %d vs %s: %d\n", Cidade1, turisticos1, cidade2, turisticos2);
            resultado = (turisticos1 > turisticos2) ? 1 : 2;
            atributo1_1 = turisticos1;
            atributo2_1 = turisticos2;
            sprintf(escolhido1, "Pontos turisticos");
            break;
        case 5:
            printf("Comparacao de Densidade populacional:\n%s: %.2f hab/km vs %s: %.2f hab/km\n", Cidade1, densidadepc1, cidade2, densidadepc2);
            resultado = (densidadepc1 > densidadepc2) ? 1 : 2;
            atributo1_1 = densidadepc1;
            atributo2_1 = densidadepc2;
            sprintf(escolhido1, "Densidade populacional");
            break;
        case 6:
            printf("Comparacao de PIB per capita:\n%s: %.2f reais vs %s: %.2f reais\n", Cidade1, Pibpc1, cidade2, Pibpc2);
            resultado = (Pibpc1 > Pibpc2) ? 1 : 2;
            atributo1_1 = Pibpc1;
            atributo2_1 = Pibpc2;
            sprintf(escolhido1, "PIB PER CAPITA");
            break;
        default:
            printf("Opcao invalida! Nenhum vencedor.\n");
            return 0;
    }
        if (atributo1_1 != atributo2_1){
        printf("Resultado: Carta %d (%s) venceu!\n\n", resultado, (resultado == 1) ? Cidade1 : cidade2);
        }else{
        printf("Resultado: Ambos atritubos empataram\n\n");}
    
    
    
        printf("Escolha um outro atributo para batalhar:\n");
            switch (input)
            {
            case 1:
                printf("[2] Area\n[3] PIB\n[4] Pontos turisticos\n[5] Densidade populacional\n[6] PIB PER CAPITA\n");
                break;
            case 2:
                printf("[1] Populacao\n[3] PIB\n[4] Pontos turisticos\n[5] Densidade populacional\n[6] PIB PER CAPITA\n");
                break;
            case 3:
                printf("[1] Populacao\n[2] Area\n[4] Pontos turisticos\n[5] Densidade populacional\n[6] PIB PER CAPITA\n");
                break;
            case 4:
                printf("[1] Populacao\n[2] Area\n[3] PIB\nn[5] Densidade populacional\n[6] PIB PER CAPITA\n");
                break;
            case 5:
                printf("[1] Populacao\n[2] Area\n[3] PIB\n[4] Pontos turisticos\n[6] PIB PER CAPITA\n");
                break;
            case 6:
                printf("[1] Populacao\n[2] Area\n[3] PIB\n[4] Pontos turisticos\n[5] Densidade populacional\n");
                break;
            
            default:
                break;
            }
            scanf("%d", &input2);
    
            switch (input2) {
                case 1:
                    printf("Comparacao de Populacao:\n%s: %d vs %s: %d\n", Cidade1, População1, cidade2, População2);
                    resultado2 = (População1 > População2) ? 1 : 2;
                    atributo1_2 = População1;
                    atributo2_2 = População2;
                    sprintf(escolhido2, "Populacao");
                    break;
                case 2:
                    printf("Comparacao de Area:\n%s: %.2f km² vs %s: %.2f km²\n", Cidade1, km²1, cidade2, Km²2);
                    resultado2 = (km²1 > Km²2) ? 1 : 2;
                    atributo1_2 = km²1;
                    atributo2_2 = Km²2;
                    sprintf(escolhido2, "Area");
                    break;
                case 3:
                    printf("Comparacao de PIB:\n%s: %.2f bilhoes vs %s: %.2f bilhoes\n", Cidade1, PIB1, cidade2, PIB2);
                    resultado2 = (PIB1 > PIB2) ? 1 : 2;
                    atributo1_2 = PIB1;
                    atributo2_2 = PIB2;
                    sprintf(escolhido2, "PIB");
                    break;
                case 4:
                    printf("Comparacao de Pontos turisticos:\n%s: %d vs %s: %d\n", Cidade1, turisticos1, cidade2, turisticos2);
                    resultado2 = (turisticos1 > turisticos2) ? 1 : 2;
                    atributo1_2 = turisticos1;
                    atributo2_2 = turisticos2;
                    sprintf(escolhido2, "Pontos turisticos");
                    break;
                case 5:
                    printf("Comparacao de Densidade populacional:\n%s: %.2f hab/km² vs %s: %.2f hab/km²\n", Cidade1, densidadepc1, cidade2, densidadepc2);
                    resultado2 = (densidadepc1 > densidadepc2) ? 1 : 2;
                    atributo1_2 = densidadepc1;
                    atributo2_2 = densidadepc2;
                    sprintf(escolhido2, "Densidade populacional");
                    break;
                case 6:
                    printf("Comparacao de PIB per capita:\n%s: %.2f reais vs %s: %.2f reais\n", Cidade1, Pibpc1, cidade2, Pibpc2);
                    resultado2 = (Pibpc1 > Pibpc2) ? 1 : 2;
                    atributo1_2 = Pibpc1;
                    atributo2_2 = Pibpc2;
                    sprintf(escolhido2, "PIB PER CAPITA");
                    break;
                default:
                    printf("Opcao invalida! Nenhum vencedor.\n");
                    }
        if (atributo1_2 != atributo2_2){
            printf("Resultado: Carta %d (%s) venceu!\n\n", resultado, (resultado == 1) ? Cidade1 : cidade2);
        }else{
            printf("Resultado: Ambos atributos empataram\n\n");}
            
            int soma, soma2;
            int resultadosoma;
            
        printf("Agora a batalha sao com as duas juntas:\n %s mais %s", escolhido1, escolhido2);
            soma = atributo1_1 + atributo1_2;
            soma2 = atributo2_1 + atributo2_2;
        printf(" %s: %d pontos\n  vs\n %s: %d pontos\n\n", escolhido1, soma, escolhido2, soma2);
        if (soma > soma2)
        {
            resultadosoma = (soma > soma2) ? 1 : 2;
            printf("Resultado: Carta %d (%s) venceu!\n", resultado, (resultado == 1) ? Cidade1 : cidade2);
        }
            else if (soma < soma2)
            {
                resultadosoma = (soma > soma2) ? 1 : 2;
                printf("Resultado: Carta %d (%s) venceu!\n", resultado, (resultado == 1) ? Cidade1 : cidade2);
            }
            
                else{
                    printf("Ambas as cartas empataram no desafio somado");
                }

                return 0;
                
        }
