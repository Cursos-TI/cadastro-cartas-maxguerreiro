#include <stdio.h>
#include <string.h>

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
  float densidadePopulacional, segundaDensidadePopulacional; // para uma melhor precisão, poderia usar double.
  float pibPerCapita, segundoPibPerCapita;
  float superPoder, superPoder2;

   // Área para entrada de dados

  printf("Cadastro de Cidade para o Super Trunfo\n");
  printf("-----------------------------------------\n");
  
  // Declaração das variaveis da primeira cidade

  printf("Digite os dados da primeira carta:\n");


  printf("Digite o estado (A-H): ");
  scanf(" %c", &estado);

  printf("Digite o código da cidade: ");
  scanf(" %4s", codigo);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade);

  printf("Digite a população da cidade: ");
  scanf(" %d", &populacao);

  printf("Digite a área da cidade: (em km²): ");
  scanf(" %f", &area);

  printf("Digite o PIB da cidade (em bilhões): ");
  scanf(" %f", &pib);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf(" %d", &pontosturisticos);

   // Declaração das variaveis da Segunda cidade

   printf("---------------------------------------\n");

  printf("\nDigite os dados da segunda cidade:\n");

  printf("Digite o estado (A-H): ");    
  scanf(" %c", &segundoestado);

  printf("Digite o código da cidade: ");
  scanf(" %4s", segundocodigo);

  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", segundacidade);

  printf("Digite a população da cidade: ");
  scanf(" %d", &segundapopulacao);

  printf("Digite a área da cidade: (em km²): ");
  scanf(" %f", &segundaarea);

  printf("Digite o PIB da cidade: (em bilhões): ");
  scanf(" %f", &segundopib);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf(" %d", &segundopontosturisticos);

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
  printf("População: %d\n", populacao);
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
  printf("População: %d\n", segundapopulacao);
  printf("Área: %.2f km²\n", segundaarea);
  printf("PIB: %.2f bilhões\n", segundopib);
  printf("Pontos Turísticos: %d\n", segundopontosturisticos);
  printf("Densidade Populacional: %.2f habitantes/km²\n", segundaDensidadePopulacional);
  printf("PIB per Capita: %.2f\n", segundoPibPerCapita);
  printf("Super Poder: %.2f\n", superPoder2);

  //Área de comparação dos atributos das cartas

  printf("---------------------------------------\n");

  if (densidadePopulacional < segundaDensidadePopulacional)
    printf("\nA carta com maior Super Poder é: %s com densidade populacional de %.2f\n", cidade, densidadePopulacional);
  else if (segundaDensidadePopulacional < densidadePopulacional)
    printf("\nA carta com maior Super Poder é: %s com densidade populacional de %.2f\n", segundacidade, segundaDensidadePopulacional);
  else
    printf("\nAs duas cartas possuem a mesma densidade populacional de %.2f\n", densidadePopulacional);

  return 0;

  //versão 2.0;
} 

