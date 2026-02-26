#include <stdio.h>
#define blue "\x1b["
#define reset "\x1b[0m"

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2,
  cidade1[50], cidade2[50],
  codigo1[10], codigo2[10];

  int populacao1, populacao2,
  pontos_turisticos1, pontos_turisticos2;

  float area1, area2,
  pib1, pib2;

  // Área para entrada de dados

  printf("Cadastro Carta 1 ------------------------------------------\n");
  printf("Digite a letra inicial do estado: ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (inicial do estado + numero[01 á 09]): ");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade [apenas uma palavra ou separadas por -]: ");
  scanf("%s", cidade1);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao1);

  printf("Digite a Área (em Km separados com .): ");
  scanf("%f", &area1);
  
  printf("Digite o PIB (em milhões, centavos separados por .): ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  printf("===========================================================\n");
  printf("\n");

  printf("Cadastro Carta 2 ------------------------------------------\n");
  printf("Digite a letra inicial do estado: ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (inicial do estado + numero[01 á 09]): ");
  scanf(" %s", codigo2);

  printf("Digite o nome da cidade [apenas uma palavra ou separadas por -]: ");
  scanf("%s", cidade2);

  printf("Digite o número de habitantes: ");
  scanf("%lu", &populacao2);

  printf("Digite a Área (em Km separados com .): ");
  scanf("%f", &area2);
  
  printf("Digite o PIB (em milhões, centavos separados por .): ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  printf("===========================================================\n");
  printf("\n");

  // Área para exibição dos dados da cidade

  printf("CARTA 1\n");
  printf("Inicial do Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Número Populacional: %lu\n", populacao1);
  printf("Área (em Km): %.3f\n", area1);
  printf("PIB: (em milhões): %.2f\n", pib1);
  printf("Número de Pontos Turistícos:  %d\n", pontos_turisticos1);
  printf("===========================================================\n");
  printf("\n");
  
  printf("CARTA 2\n");
  printf("Inicial do Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Número Populacional: %lu\n", populacao2);
  printf("Área (em Km): %.3f\n", area2);
  printf("PIB: (em milhões): %.2f\n", pib2);
  printf("Número de Pontos Turistícos:  %d\n", pontos_turisticos2);
  printf("===========================================================\n");
  printf("\n");

  return 0;
}
