#include <stdio.h>
#include <stdlib.h>
//area onde foram cadastrada todas as variaveis.

int main() {
 
    //cadastro de vaiaveis
    int opcao;
    int menu;
    int carta1, carta2;
    int caracteristica;
    int caracteristica2;
    int media, media2, media3;
    char nome_cidade1[50] = "Carta1-Manaus(AM)", nome_cidade2[50] = "Carta2-Belém(PA)";
    int populacao_cidade1 = 2279686, populacao_cidade2 = 1303403;
    float area_cidade1 = 11401, area_cidade2 = 1059;
    float PIB_cidade1 = 43700000, PIB_cidade2 = 64000000;
    int numeros_de_pontos_turisticos_cidade1 = 10, numeros_de_pontos_turisticos_cidade2 = 5;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIB_per_capita1, PIB_per_capita2;
   


//nessa area foi area destinada para o calculo de (densidade populacional & PIB percapita)

  DensidadePopulacional1 = populacao_cidade1 / area_cidade1;
  DensidadePopulacional2 = populacao_cidade2 / area_cidade2;
  PIB_per_capita1 = PIB_cidade1 / populacao_cidade1;
  PIB_per_capita2 = PIB_cidade2 / populacao_cidade2;

//mensagem de boas vindas ao jogo.

  printf("Seja bem bem vindo ao jogo super Trunfo\n");
  printf("Espero que se divirta\n");

//menu principal

    printf("Menu Principal:\n");
    printf("1. Iniciar jogo:\n");
    printf("2. Vissualizar Regras:\n");
    printf("3. Sair:\n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);

//switch de decisao de inicialização do jogo.
//case 1 para inicialização dando inicio ao procimo menu.
//case 2 para apresentação das regras do jogo.
//case 3 para mensagem de despedida.
switch (opcao)
{
case 1:
    printf("###Escolha a carta:### \n");
    printf("Para escolher a carta 1 digite: 1\n");
    printf("Para escolher a carta 2 digite: 2\n");
    scanf("%d", &carta1 , carta2);

 break;
   
case 2:
    printf("###Regras do jogo###\n");
    printf("O Super Trunfo é um jogo de cartas em que os jogadores competem com base em características");
    printf("específicas de cada carta, como países, carros, cães, etc. O objetivo é acumular todas as cartas do jogo.\n");
    printf("O jogador com a carta que tiver o maior valor na característica escolhida na rodada leva as cartas\n");
    printf("dos outros jogadores, colocando-as atrás do seu monte. A carta Super Trunfo, se houver, tem prioridade\n");
    printf("sobre todas as outras, exceto cartas com a letra A,e o jogo termina quando um jogador acumula todas as cartas.zn");

    break;

case 3:
    printf("###Ate a proxima!####");

    break;


}
// switch de apresentação da carta escolhida
if (carta1 == 1 ) {

    printf("Você escolheu a carta 1: Manaus(AM)\n");
    printf("1. População: 2.279.686\n");
    printf("2. Área: 1.140.100 km²\n");
    printf("3. PIB: R$ 43.700.000\n");
    printf("4. Número de pontos turísticos: 10\n");
    printf("5. Densidade populacional: 2.000 hab/km²\n");
    printf("6.  PIB per capita: R$ 19.200\n");
  
    printf("###Escolha duas Caracteristicas### \n");
    scanf("%d \n", &caracteristica);
  
} else if (carta2 == 2){
   
    printf("Você escolheu a carta 2: Belém(PA)\n");
    printf("1. População: 1303403\n");
    printf("2. Área: 1059000 km²\n");
    printf("3. PIB: R$ 64000000\n");
    printf("4. Número de pontos turísticos: 5\n");
    printf("5. Densidade populacional: 1200 hab/km²\n");
    printf("6. PIB per capita: R$ 49000\n");
    
    printf("###Escolha a primeira Caracteristica###");
    scanf("%d \n", &caracteristica);
} else{
    printf("Opção Invalida");   
}


if (caracteristica == caracteristica2) {
    printf("Caracterisitcas nao podem ser iguais");
 }  else if ((caracteristica >= 1 && caracteristica >= 6)) {
  
    switch (caracteristica)
   {
   
 case 1:   
    if ("populacao_cidade1 > popuacao_cidade2"){
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi População.\n");
        printf("População Manaus: %d de Pessoas\n", populacao_cidade1);
        printf("População Belém: %d de Pessoas\n", populacao_cidade2);
        printf("Manaus(AM) Venceu!\n");


   
    } else if (populacao_cidade1 < populacao_cidade2) {
       printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi População.\n");
        printf("População Manaus: %d de Pessoas\n", populacao_cidade1);
        printf("População Belém: %d de Pessoas\n", populacao_cidade2);
        printf("Belém(PA) Venceu!\n");

   
    } else {
        printf("Manaus(AM) e Belém(PA) têm a mesma população.\n");
        printf("o Atributo comprado foi População.\n");
        printf("A disputa Acabou em Empate!\n");
    }
    
    break;
case 2:
    if (area_cidade1 > area_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Área.\n");
        printf("Área Manaus: %.2f km²\n", area_cidade1);
        printf("Área Belém: %.2f km²\n", area_cidade2);
        printf("Manaus(AM) Venceu!\n");
    } else if (area_cidade1 < area_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Área.\n");
        printf("Área Manaus: %.2f km²\n", area_cidade1);
        printf("Área Belém: %.2f km²\n", area_cidade2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm a mesma área.\n");
        printf("o Atributo comprado foi Área.\n");
        printf("A disputa Acabou em Empate!\n");
    }
   
    break;
case 3:
    if (PIB_cidade1 > PIB_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB.\n");
        printf("PIB Manaus: R$ %.2f\n", PIB_cidade1);
        printf("PIB Belém: R$ %.2f\n", PIB_cidade2);
        printf("Manaus(AM) Venceu!\n");
    } else if (PIB_cidade1 < PIB_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB.\n");
        printf("PIB Manaus: R$ %.2f\n", PIB_cidade1);
        printf("PIB Belém: R$ %.2f\n", PIB_cidade2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm o mesmo PIB.\n");
        printf("o Atributo comprado foi PIB.\n");
        printf("A disputa Acabou em Empate!\n");
    }
    break;
case 4:
    if (numeros_de_pontos_turisticos_cidade1 > numeros_de_pontos_turisticos_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Número de pontos turísticos.\n");
        printf("Número de pontos turísticos Manaus: %d\n", numeros_de_pontos_turisticos_cidade1);
        printf("Número de pontos turísticos Belém: %d\n", numeros_de_pontos_turisticos_cidade2);
        printf("Manaus(AM) Venceu!\n");
    } else if (numeros_de_pontos_turisticos_cidade1 < numeros_de_pontos_turisticos_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Número de pontos turísticos.\n");
        printf("Número de pontos turísticos Manaus: %d\n", numeros_de_pontos_turisticos_cidade1);
        printf("Número de pontos turísticos Belém: %d\n", numeros_de_pontos_turisticos_cidade2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm o mesmo número de pontos turísticos.\n"); 
        printf("o Atributo comprado foi Número de pontos turísticos.\n");
        printf("A disputa Acabou em Empate!\n");
    }
        break;
   case 5:
    if (DensidadePopulacional1 > DensidadePopulacional2)
    {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Densidade Populacional.\n");
        printf("Densidade Populacional Manaus: %.2f hab/km²\n", DensidadePopulacional1);
        printf("Densidade Populacional Belém: %.2f hab/km²\n", DensidadePopulacional2);
        printf("Manaus(AM) Venceu!\n");
    } else if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Densidade Populacional.\n");
        printf("Densidade Populacional Manaus: %.2f hab/km²\n", DensidadePopulacional1);
        printf("Densidade Populacional Belém: %.2f hab/km²\n", DensidadePopulacional2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm a mesma densidade populacional.\n");
        printf("o Atributo comprado foi Densidade Populacional.\n");
        printf("A disputa Acabou em Empate!\n");
    }

    break;
    case 6:
    if (PIB_per_capita1 > PIB_per_capita2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB per capita.\n");
        printf("PIB per capita Manaus: R$ %.2f\n", PIB_per_capita1);
        printf("PIB per capita Belém: R$ %.2f\n", PIB_per_capita2);
        printf("Manaus(AM) Venceu!\n");
    } else if (PIB_per_capita1 < PIB_per_capita2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB per capita.\n");
        printf("PIB per capita Manaus: R$ %.2f\n", PIB_per_capita1);
        printf("PIB per capita Belém: R$ %.2f\n", PIB_per_capita2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm o mesmo PIB per capita.\n");
        printf("o Atributo comprado foi PIB per capita.\n");
        printf("A disputa Acabou em Empate!\n");
    }
    break;
   
    default:
    printf("Essa nao é uma opção valida!\n");
    printf("Por favor escolha uma opção valida!");

    return caracteristica;
}
}    else {
    printf("Escolha invalida");
}

 //apuração de escolhas de caracteristicas para que sajam comparadas.

 
    if (opcao == carta1){

    printf("Você escolheu a carta 1: Manaus(AM)\n");
    printf("1. População: 2.279.686\n");
    printf("2. Área: 1.140.100 km²\n");
    printf("3. PIB: R$ 43.700.000\n");
    printf("4. Número de pontos turísticos: 10\n");
    printf("5. Densidade populacional: 2.000 hab/km²\n");
    printf("6.  PIB per capita: R$ 19.200\n");

    printf("###Escolha a segunda caracteristica###\n");
    scanf("%d \n", &caracteristica2);

}   else if (opcao == carta2){
    printf("Você escolheu a carta 2: Belém(PA)\n");
    printf("1. População: 1303403\n");
    printf("2. Área: 1059000 km²\n");
    printf("3. PIB: R$ 64000000\n");
    printf("4. Número de pontos turísticos: 5\n");
    printf("5. Densidade populacional: 1200 hab/km²\n");
    printf("6. PIB per capita: R$ 49000\n");

    printf("###Escolha a segunda caracteristica###\n");
    scanf("%d \n", &caracteristica2);
}   else{
    printf("Opção Invalida");
}

    if (caracteristica == caracteristica2) {
    printf("Opção Invalida, Caracteristicas nao podem ser iguais.");

}  else if (caracteristica2 >= 1 && caracteristica2 <= 6){
   switch (caracteristica2)
   {
   
case 1:   
    if (populacao_cidade1 > populacao_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi População.\n");
        printf("População Manaus: %d de Pessoas\n", populacao_cidade1);
        printf("População Belém: %d de Pessoas\n", populacao_cidade2);
        printf("Manaus(AM) Venceu!\n");


   
    } else if (populacao_cidade1 < populacao_cidade2) {
       printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi População.\n");
        printf("População Manaus: %d de Pessoas\n", populacao_cidade1);
        printf("População Belém: %d de Pessoas\n", populacao_cidade2);
        printf("Belém(PA) Venceu!\n");

   
    } else {
        printf("Manaus(AM) e Belém(PA) têm a mesma população.\n");
        printf("o Atributo comprado foi População.\n");
        printf("A disputa Acabou em Empate!\n");
    }
    
    break;
case 2:
    if (area_cidade1 > area_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Área.\n");
        printf("Área Manaus: %.2f km²\n", area_cidade1);
        printf("Área Belém: %.2f km²\n", area_cidade2);
        printf("Manaus(AM) Venceu!\n");
    } else if (area_cidade1 < area_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Área.\n");
        printf("Área Manaus: %.2f km²\n", area_cidade1);
        printf("Área Belém: %.2f km²\n", area_cidade2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm a mesma área.\n");
        printf("o Atributo comprado foi Área.\n");
        printf("A disputa Acabou em Empate!\n");
    }
   
    break;
case 3:
    if (PIB_cidade1 > PIB_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB.\n");
        printf("PIB Manaus: R$ %.2f\n", PIB_cidade1);
        printf("PIB Belém: R$ %.2f\n", PIB_cidade2);
        printf("Manaus(AM) Venceu!\n");
    } else if (PIB_cidade1 < PIB_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB.\n");
        printf("PIB Manaus: R$ %.2f\n", PIB_cidade1);
        printf("PIB Belém: R$ %.2f\n", PIB_cidade2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm o mesmo PIB.\n");
        printf("o Atributo comprado foi PIB.\n");
        printf("A disputa Acabou em Empate!\n");
    }
    break;
case 4:
    if (numeros_de_pontos_turisticos_cidade1 > numeros_de_pontos_turisticos_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Número de pontos turísticos.\n");
        printf("Número de pontos turísticos Manaus: %d\n", numeros_de_pontos_turisticos_cidade1);
        printf("Número de pontos turísticos Belém: %d\n", numeros_de_pontos_turisticos_cidade2);
        printf("Manaus(AM) Venceu!\n");
    } else if (numeros_de_pontos_turisticos_cidade1 < numeros_de_pontos_turisticos_cidade2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Número de pontos turísticos.\n");
        printf("Número de pontos turísticos Manaus: %d\n", numeros_de_pontos_turisticos_cidade1);
        printf("Número de pontos turísticos Belém: %d\n", numeros_de_pontos_turisticos_cidade2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm o mesmo número de pontos turísticos.\n"); 
        printf("o Atributo comprado foi Número de pontos turísticos.\n");
        printf("A disputa Acabou em Empate!\n");
    }
        break;
   case 5:
    if (DensidadePopulacional1 > DensidadePopulacional2)
    {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Densidade Populacional.\n");
        printf("Densidade Populacional Manaus: %.2f hab/km²\n", DensidadePopulacional1);
        printf("Densidade Populacional Belém: %.2f hab/km²\n", DensidadePopulacional2);
        printf("Manaus(AM) Venceu!\n");
    } else if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi Densidade Populacional.\n");
        printf("Densidade Populacional Manaus: %.2f hab/km²\n", DensidadePopulacional1);
        printf("Densidade Populacional Belém: %.2f hab/km²\n", DensidadePopulacional2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm a mesma densidade populacional.\n");
        printf("o Atributo comprado foi Densidade Populacional.\n");
        printf("A disputa Acabou em Empate!\n");
    }

    break;
    case 6:
    if (PIB_per_capita1 > PIB_per_capita2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB per capita.\n");
        printf("PIB per capita Manaus: R$ %.2f\n", PIB_per_capita1);
        printf("PIB per capita Belém: R$ %.2f\n", PIB_per_capita2);
        printf("Manaus(AM) Venceu!\n");
    } else if (PIB_per_capita1 < PIB_per_capita2) {
        printf("Cidade Manaus(AM) X Cidade Belem(PA).\n");
        printf("o Atributo comprado foi PIB per capita.\n");
        printf("PIB per capita Manaus: R$ %.2f\n", PIB_per_capita1);
        printf("PIB per capita Belém: R$ %.2f\n", PIB_per_capita2);
        printf("Belém(PA) Venceu!\n");
    } else {
        printf("Manaus(AM) e Belém(PA) têm o mesmo PIB per capita.\n");
        printf("o Atributo comprado foi PIB per capita.\n");
        printf("A disputa Acabou em Empate!\n");
    }
    break;
   
    default:
    printf("Essa nao é uma opção valida!\n");
    printf("Por favor escolha uma opção valida!");

     return caracteristica2;
}
}   else {
    printf("Caracteristicas invalida");
}
}







