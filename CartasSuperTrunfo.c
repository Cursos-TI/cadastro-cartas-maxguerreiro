#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis da primeira cidade

  char estado;
  char codigo[4];
  char cidade[50]; 
  int populacao;
  float area;
  float pib;
  int pontosturisticos;

  // Variáveis da segunda cidade

  char segundoestado;
  char segundocodigo[4];
  char segundacidade[50]; 
  int segundapopulacao;
  float segundaarea;
  float segundopib;
  int segundopontosturisticos;

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

  printf("Digite a área da cidade: ");
  scanf(" %f", &area);

  printf("Digite o PIB da cidade: ");
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

  printf("Digite a área da cidade: ");
  scanf(" %f", &segundaarea);

  printf("Digite o PIB da cidade: ");
  scanf(" %f", &segundopib);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf(" %d", &segundopontosturisticos);

  // Área para exibição dos dados da cidade

  printf("---------------------------------------\n");

  printf("\n--- Carta 1: ---\n");
  printf("Estado: %c\n", estado);
  printf("Código da Cidade: %s\n", codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões\n", pib);
  printf("Pontos Turísticos: %d\n", pontosturisticos);

  printf("\n--- Carta 2: ---\n");
  printf("Estado: %c\n", segundoestado);
  printf("Código da Cidade: %s\n", segundocodigo);
  printf("Nome da Cidade: %s\n", segundacidade);
  printf("População: %d\n", segundapopulacao);
  printf("Área: %.2f km²\n", segundaarea);
  printf("PIB: %.2f bilhões\n", segundopib);
  printf("Pontos Turísticos: %d\n", segundopontosturisticos);

  return 0;
} 

