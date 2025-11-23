#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado, segundoestado;
  char codigo[4], segundocodigo[4];
  char cidade[50], segundacidade[50];
  unsigned long int populacao, segundapopulacao;
  float area, segundaarea;
  float pib, segundopib;
  int pontosturisticos, segundopontosturisticos;
  float densidadePopulacional, segundaDensidadePopulacional;
  float pibPerCapita, segundoPibPerCapita;
  float superPoder, superPoder2;

  // Váriavel para armazenar a escolha do palyer 1 e 2
  
  int escolhaDoJogadorA, escolhaDoJogadorB; 

   // Área para entrada de dados

  printf("Cadastro de Cidade para o Super Trunfo\n");
  printf("-----------------------------------------\n");
  
    // Declaração das variaveis da primeira cidade

  printf("Digite os dados da primeira carta:\n");


  printf("Digite o estado (A-H): ");
  // scanf(" %c", &estado);
  estado = 'A';

  printf("Digite o código da cidade: ");
  // scanf(" %4s", codigo);
  strcpy(codigo, "A01");

  printf("Digite o nome da cidade: ");
  // scanf(" %[^\n]", cidade);
  strcpy(cidade, "São Paulo");

  printf("Digite a população da cidade: ");
  // scanf(" %d", &populacao);
  populacao = 12300000;

  printf("Digite a área da cidade: (em km²): ");
  // scanf(" %f", &area);
  area = 1521.11;

  printf("Digite o PIB da cidade (em bilhões): ");
  // scanf(" %f", &pib);
  pib = 700.5;

  printf("Digite o número de pontos turísticos da cidade: ");
  // scanf(" %d", &pontosturisticos);
  pontosturisticos = 150;

    // Declaração das variaveis da Segunda cidade

   printf("---------------------------------------\n");

  printf("\nDigite os dados da segunda carta:\n");

  printf("Digite o estado (A-H): ");    
  // scanf(" %c", &segundoestado);
  segundoestado = 'B';

  printf("Digite o código da cidade: ");
  // scanf(" %4s", segundocodigo);
  strcpy(segundocodigo, "B02");

  printf("Digite o nome da cidade: ");
  // scanf(" %[^\n]", segundacidade);
  strcpy(segundacidade, "Rio de Janeiro");

  printf("Digite a população da cidade: ");
  // scanf(" %d", &segundapopulacao);
  segundapopulacao = 6748000;

  printf("Digite a área da cidade: (em km²): ");
  // scanf(" %f", &segundaarea);
  segundaarea = 1182.3;

  printf("Digite o PIB da cidade: (em bilhões): ");
  // scanf(" %f", &segundopib);
  segundopib = 450.2;

  printf("Digite o número de pontos turísticos da cidade: ");
  // scanf(" %d", &segundopontosturisticos);
  segundopontosturisticos = 200;

    //Área de calculo da denseidade populacional das cidades

  densidadePopulacional = (float) populacao / area; //fazendo o cast para float para evitar erro de divisão inteira.
  segundaDensidadePopulacional = (float)segundapopulacao / segundaarea; //fazendo o cast para float para evitar erro de divisão inteira.

    //Área de calculo do pib per capita das cidades

  pibPerCapita = (float)(pib * 1000000000) / populacao; 
  segundoPibPerCapita = (float)(segundopib * 1000000000) / segundapopulacao;

    //Área para calculo do super poder das cidades

  superPoder = (float) (populacao + area + pibPerCapita + pontosturisticos + densidadePopulacional) + pib/1000000000; //normalizando o pib per capita para evitar overflow.
  superPoder2 = (float) (segundapopulacao + segundaarea + segundoPibPerCapita + segundopontosturisticos + segundaDensidadePopulacional) + segundopib/1000000000;

  // Área para exibição dos dados das cartas

  printf("---------------------------------------\n");

  printf("\n--- Carta 1: ---\n");
  printf("Estado: %c\n", estado);
  printf("Código da Cidade: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %lu\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos Turísticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
  printf("PIB per Capita: %.2f\n", pibPerCapita);
  printf("Super Poder: %.2f\n", superPoder);

  printf("\n--- Carta 2: ---\n");
  printf("Estado: %c\n", segundoestado);
  printf("Código da Cidade: %s\n", segundocodigo);
  printf("Nome da Cidade: %s\n", segundacidade);
  printf("População: %lu\n", segundapopulacao);
  printf("Área: %.2f km²\n", segundaarea);
  printf("PIB: %.2f bilhões\n", segundopib);
  printf("Pontos Turísticos: %d\n", segundopontosturisticos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", segundaDensidadePopulacional);
  printf("PIB per Capita: %.2f\n", segundoPibPerCapita);
  printf("Super Poder: %.2f\n", superPoder2);

  //Área de escolha dos atributos das cartas

  printf("---------------------------------------\n");
  printf("VAMOS JOGAR!\n");
  printf("Escolha um atributo para comparar:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turísticos\n");
  printf("5 - Densidade Populacional\n");
  printf("Escolha o atributo para comparar (1-5): \n");
  scanf(" %d", &escolhaDoJogadorA);






  // Area para exibição doresultado da partida
  printf("---------------------------------------\n");
  printf("Resultado da Partida:\n");
  printf("%s VS %s\n", cidade, segundacidade);
  printf("Atributo escolhido: ");

  float resultadoA, resultadoB;
 
  switch (escolhaDoJogadorA)
  {
  case 1:
    printf("População:\n");
    printf("%s: População %lu\n%s: População %lu\n", cidade, populacao, segundacidade, segundapopulacao);
    resultadoA = (float) populacao;
    resultadoB = (float) segundapopulacao;
    break;
  case 2:
    printf("Área:\n");
    printf("%s: Área %.2f km²\n%s: Área %.2f km²\n", cidade, area, segundacidade, segundaarea);
    resultadoA = area;
    resultadoB = segundaarea;
    break;
  case 3:
    printf("PIB\n");
    printf("%s: PIB %.2f bilhões\n%s: PIB %.2f bilhões\n", cidade, pib, segundacidade, segundopib);
    resultadoA = pib;
    resultadoB = segundopib;
    break;
  case 4:
    printf("Pontos Turísticos\n");
    printf("%s: Pontos Turísticos %d\n%s: Pontos Turísticos %d\n", cidade, pontosturisticos, segundacidade, segundopontosturisticos);
    resultadoA = (float) pontosturisticos;
    resultadoB = (float) segundopontosturisticos;
    break;
  case 5:
    printf("Densidade Populacional\n");
    printf("%s: Densidade Populacional %.2f habitantes/km²\n%s: Densidade Populacional %.2f habitantes/km²\n", cidade, densidadePopulacional, segundacidade, segundaDensidadePopulacional);
    resultadoA = densidadePopulacional;
    resultadoB = segundaDensidadePopulacional;
    break;  
  
  default:
    break;
  }
  
  printf("---------------------------------------\n");

  if (escolhaDoJogadorA == 5) {
    if (resultadoA < resultadoB) {
      printf("%s vence com menor densidade populacional!\n", cidade);
    } else if (resultadoB < resultadoA) {
      printf("%s vence com menor densidade populacional!\n", segundacidade);
    } else {
      printf("A partida terminou em empate!\n");
    }
  } else {
    if (resultadoA > resultadoB) {
      printf("%s vence a partida!\n", cidade);
    } else if (resultadoB > resultadoA) {
      printf("%s vence a partida!\n", segundacidade);
    } else {
      printf("A partida terminou em empate!\n");
    }
  }
  return 0;

  //versão 2.0;
} 

