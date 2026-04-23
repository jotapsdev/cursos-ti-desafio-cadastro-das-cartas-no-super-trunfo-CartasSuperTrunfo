#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char Estado[4], estado[4];
    char Codigo[5], codigo[5];
    char Cidade[10],cidade[10];
    int População, populacao;
    float Areakm2, area;
    float PIB, pib;
    int PontosTR, pontos;
    float PIBp, Denisdade, pibp, densidade;
    float SuperPoder, superpoder; 
    int comparacao; 

    // Cadastro das Cartas:
    
   printf("Bem vindo ao super Trunfo, Jogador!\n");
   printf("Vamos começar!\n\n");

    printf(" Insira o estado: \n", Estado);
    scanf(" %s", Estado);

     printf("Insira o código: \n", Codigo);
    scanf("%s", &Codigo);

    printf("Insira a Cidade: \n", Cidade);
    scanf("%s", &Cidade);
    
    printf("Informe a População: \n", População);
    scanf(" %d", &População);
 
    printf("Informe a área: \n", Areakm2);
    scanf(" %f", &Areakm2);

    printf("Informe o PIB: \n", PIB);
    scanf("%f", &PIB);

    printf("Insira o numero de pontos turisticos: \n", PontosTR);
    scanf(" %d", &PontosTR);

/* adicionando propriedade as cartas */

    Denisdade = População / Areakm2;
    
    PIBp = PIB / População;

    SuperPoder = (População + Areakm2 + PIB + PIBp + (Denisdade / 1) + PontosTR);

// Exibição dos Dados das Cartas:

 printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", População);
    printf("Area: %.2f km2\n", Areakm2);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTR);
    printf("Densidade: %f\n", Denisdade);
    printf("PIB percapta: %f\n", PIBp);
    printf("Super Poder: %.2f\n\n\n", SuperPoder);


    // Cadastro das Cartas 2:

   printf("Cadastre a segunda carta!\n\n");

    printf(" Insira o estado: \n", estado);
    scanf(" %s", estado);

     printf("Insira o código: \n", codigo);
    scanf(" %s", &codigo);

    printf("Insira a Cidade: \n", cidade);
    scanf("%s", &cidade);
    
    printf("Informe a População: \n", populacao);
    scanf(" %d", &populacao);
 
    printf("Informe a área: \n", area);
    scanf(" %f", &area);

    printf("Informe o PIB: \n", pib);
    scanf("%f", &pib);

    printf("Insira o numero de pontos turisticos: \n", pontos);
    scanf(" %d", &pontos);

/* adicionando propriedade as cartas */

    densidade = populacao / area;

    pibp = pib / populacao;

     superpoder = (populacao + area + pib + pibp + (densidade / 1) + pontos);

// Exibição dos Dados das Cartas 2:

 printf("\n--- Dados da Carta 2---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos);
    printf("Densidade: %f\n", densidade);
    printf("PIB percapta: %f\n", pibp);
    printf("Super Poder: %.2f\n\n\n", superpoder);

/*char Estado[4], estado[4];
    char Codigo[5], codigo[5];
    char Cidade[10],cidade[10];
    int População, populacao;
    float Areakm2, area;
    float PIB, pib;
    int PontosTR, pontos;
    float PIBp, Denisdade, pibp, densidade;
    float SuperPoder, superpoder; 
    float comparação;*/

    
    /* comparação de poder */
    printf("COMPARAÇÃO DE PODERES\n\n\n");
    printf("Selecione o atributo para comparar:\n");
    printf(" 1 - população\n");
    printf(" 2 - Area\n");
    printf(" 3 - PIB\n");
    printf(" 4 - PIB Percapta\n");
    printf(" 5 - Pontos Turisticos\n");
    printf(" 6 - Densidade\n");
    printf(" 7 - Super poder\n");
    scanf("%d", &comparacao);



     switch (comparacao)
     {
     case 1:
     printf("Comparação de População\n");

     if (População > populacao){
        printf("Carta %s venceu\n", Codigo);
     } else if (População < populacao){
        printf("Carta %s venceu\n", codigo);
     } else {
        printf("Houve um empate\n");
     }
        break;
    case 2:
     printf("Comparação de Area\n");

     if (Areakm2 > area){
        printf("Carta %s venceu\n", Codigo);
     } else if (Areakm2 < area){
        printf("Carta %s venceu\n", codigo);
     } else {
        printf("Houve um empate\n");
     }
     break;
case 3:
     printf("Comparação de PIB\n");

     if (PIB > pib){
        printf("Carta %s venceu\n", Codigo);
     } else if (PIB < pib){
        printf("Carta %s venceu\n", codigo);
     } else {
        printf("Houve um empate\n");
     }

     break;

     case 4:
     printf("Comparação de PIB percapta\n");

     if (PIBp > pibp){
        printf("Carta %s venceu\n", Codigo);
     } else if (PIBp < pibp){
        printf("Carta %s venceu\n", codigo);
     } else {
        printf("Houve um empate\n");
     }

     break;

     case 5:
     printf("Comparação de Pontos Turisticos\n");

     if (PontosTR > pontos){
        printf("Carta %s venceu\n", Codigo);
     } else if (PontosTR < pontos){
        printf("Carta %s venceu\n", codigo);
     } else {
        printf("Houve um empate\n");
     }

     break;

     case 6:
     printf("Comparação de Densidade\n");

     if (Denisdade > densidade){
        printf("Carta %s venceu\n", Codigo);
     } else if (Denisdade < densidade){
        printf("Carta %s venceu\n", codigo);
     } else {
        printf("Houve um empate\n");
     }

     break;

     case 7:
     printf("Comparação de Poder\n");

     if (SuperPoder > superpoder){
        printf("Carta %s venceu\n", Codigo);
     } else if (SuperPoder < superpoder){
        printf("Carta %s venceu\n", codigo);
     } else {
        printf("Houve um empate\n");
     }

     default:
     printf("Opção invalida");
        break;
        
     }

    

   








    return 0;
}
