#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Declaração das variaveis

    char estado, cod, cidade [50];
    char cod[3];
    int populacao, pontosTuristicos;
    float area, pib;

    char segundoEstado, segundaCidade [50];
    char segundoCod[3];
    int segundoPopulacao, segundoPontosTuristicos;
    float segundaArea, segundoPib;

  // Área para entrada de dados

    // Dados primeira carta

    printf("Insira os dados da primeira carta: \n");

    printf("Digite a letra do estado: \n");
    printf("Digite o código da carta: \n");
    scanf("%s", cod);
    printf("Digite o código da carta: \n");
    scanf("%s\n", cod);

    printf("Digite o nome da cidade: \n");
    fgets(cidade, 50, stdin);

    printf("Digite a população: \n");
    scanf( "%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
      printf("Digite o número de pontos turísticos: \n");
      scanf("%d", &pontosTuristicos);
  
      // Limpar buffer
      while (getchar() != '\n');
  
    // Dados da segunda carta

    // Dados da segunda carta

    printf("Digite o código da carta: \n");
    scanf("%s", segundoCod);
    printf("Digite a letra do estado: \n");
    scanf("%c", &segundoEstado); // espaço antes de %c ignora Enter anterior

    printf("Digite o código da carta: \n");
    scanf("%s", segundoCod);

    printf("Digite o nome da cidade: \n");
    fgets(segundaCidade, 50, stdin);

    printf("Digite a população: \n");
    scanf("%d", &segundoPopulacao);

    printf("Digite a área: \n");
    scanf("%f", &segundaArea);

    printf("Digite o PIB: \n");
    scanf("%f", &segundoPib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

  // Área para exibição dos dados da cidade

  //Saida dos dados da primeira carta

    printf("Carta: 1 \n");
    printf("Estado: %c\nCódigo: %2s\nNome da cidade: %s\n", estado, cod, cidade);
    printf("População: %d\nÁrea: %f\nPIB: %d\nNumero de pontos Turisticos: %d\n", populacao, area, pib, pontosTuristicos);
           
  //Saída de dados da segunda carta

  printf("Carta: 1 \n");
    printf("Estado: %c\nCódigo: %2s\nNome da cidade: %s\n", segundoEstado, segundoCod, segundaCidade);
    printf("População: %d\nÁrea: %f\nPIB: %d\nNumero de pontos Turisticos: %d\n", segundoPopulacao, segundaArea, segundoPib, segundoPontosTuristicos);

  return 0;
} 

