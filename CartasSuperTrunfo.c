#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado, cod[3], cidade [20];
    int populacao, pontosTuristicos;
    float area, pib;

    char estado2, cod2[3], cidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

  // Área para entrada de dados

    // Dados primeira carta

    printf("Insira os dados da primeira carta: \n");

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado); // espaço antes de %c ignora Enter anterior

    printf("Digite o código da carta: \n");
    scanf(" %d", &cod);
    setbuf(stdin, NULL); // limpa o buffer do teclado

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a área: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos);

    // Dados da segunda carta

    printf("Insira os dados da segunda carta: \n");

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2); // espaço antes de %c ignora Enter anterior

    printf("Digite o código da carta: \n");
    scanf(" %d", &cod2);
    setbuf(stdin, NULL); // limpa o buffer do teclado

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  //Saida dos dados da primeira carta

    printf("Carta: 1 \n");
    printf("Estado: %c\nCódigo: %c\nNome da cidade: %c\n", estado, cod, cidade);
    printf("População: %d\nÁrea: %f\nPIB: %d\nNumero de pontos Turisticos: %d\n", populacao, area, pib, pontosTuristicos);
           
  //Saída de dados da segunda carta

  printf("Carta: 1 \n");
    printf("Estado: %c\nCódigo: %c\nNome da cidade: %c\n", estado2, cod2, cidade2);
    printf("População: %d\nÁrea: %f\nPIB: %d\nNumero de pontos Turisticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);

return 0;
} 
