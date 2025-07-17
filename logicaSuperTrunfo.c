#include <stdio.h>

int main() {
 //cadastro de vaiaveis

    int carta1, carta2; 
//qui foram feitas a introdução de todos os dados nescessarios das cartas

    int codi_carta_cidade1 = 01, codi_carta_cidade2 = 02;
    char nome_cidade1[50] = "Carta1-Manaus(AM)", nome_cidade2[50] = "Carta2-Belén(PA)";
    int populacao_cidade1 = 2279686, populacao_cidade2 = 1303403;
    float area_cidade1 = 11401000, area_cidade2 = 1059000;   
    float PIB_cidade1 = 43700000, PIB_cidade2 =  64000000;
    int numeros_de_pontos_turisticos_cidade1 = 10, numeros_de_pontos_turisticos_cidade2 = 5;
    int codigo_densidade_populacional_cidade1 = 1, codigo_densidade_populacional_cidade2 = 2;
    int codigo_PIB_per_capita_cidade1 = 1, codigo_PIB_per_capita_cidade2 = 2;
//nessa area foi area destinada para o calculo de (densidade populacional & PIB percapita)

    float Densidade_populacional1 = PIB_cidade1 / area_cidade1;
    float Densidade_Populacional2 = PIB_cidade2 / area_cidade2;
    float PIB_percapita_cidade1 = PIB_cidade1 / populacao_cidade1;
    float PIB_percapita_cidade2 = PIB_cidade2 / populacao_cidade2;

      printf("Comparação das Cartas: (atributo Densidade Area\n");

//area destinada para conparação entre os atributos escolhidos e exibição da carta vencedora.
    if(area_cidade1 > area_cidade2)
    {
    printf("%s %f \n", nome_cidade1, area_cidade1);
    printf("%s %f \n", nome_cidade2, area_cidade2);
    printf("A cidade vencedora é %s\n", nome_cidade1);
    
    }
    else{
    printf("%s %f \n", nome_cidade1, area_cidade1);
    printf("%s %f \n", nome_cidade2, area_cidade2);
    printf("A cidae Vencedora é %s\n", nome_cidade2);
    }
    
}
