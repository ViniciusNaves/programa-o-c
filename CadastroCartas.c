#include <stdio.h>

    int main() {
  //Variaveis carta 1//

  char estado1[4];
  char codigo1[4];
  char cidade1[40];
  float area1;
  float pib1;
  float densidade1;
  int pontosturisticos1;
  int populacao1;
  
 
  // variareis carta 2//

  char estado2[4];
  char codigo2[4];
  char cidade2[40];
  float area2;
  float pib2;
  float densidade2;
  int pontosturisticos2;
  int populacao2;

  //cadastro 1 carta//

      printf("\n===Cadastro 1 carta===\n");

      printf("estado (A-H): ");
      scanf("%s", estado1);

      printf("codigo da carta (ex:A01): ");
      scanf(" %s", codigo1);

      printf("cidade: ");
      scanf(" %[^\n]", cidade1);

      printf("populacao: ");
      scanf("%d", &populacao1);

      printf("area (km2): ");
      scanf("%f", &area1);

      printf("pib (em bilhoes): ");
      scanf("%f", &pib1);

      printf("pontos turisticos: ");
      scanf("%d", &pontosturisticos1);

      // - calculo densidade populacional 1 - //

      densidade1 = populacao1 / area1;

    // cadastro 2 carta//
      
      printf("\n===cadastro 2 carta===\n");

      printf("estado (A-H): ");
      scanf("%s", estado2);

      printf("codigo da carta (ex:A01): ");
      scanf(" %s", codigo2);

      printf("cidade: ");
      scanf(" %[^\n]", cidade2);

      printf("populacao: ");
      scanf("%d", &populacao2);

      printf("area (km2): ");
      scanf("%f", &area2);

      printf("pib (em bilhoes): ");
      scanf("%f", &pib2);

      printf("pontos turisticos: ");
      scanf("%d", &pontosturisticos2);

      // - calculo densidade populacional 2 - //

      densidade2 = populacao2 / area2;


    // exibição dos dados das cartas//

      printf("\n===Carta 1===\n");
      printf("Estado: %s\n", estado1);
      printf("codigo: %s\n", codigo1);
      printf("cidade: %s\n", cidade1);
      printf("populacao: %d\n", populacao1);
      printf("area: %.2f (km2)\n", area1);
      printf("pib: %.2f\n", pib1);
      printf("pontos turisticos: %d\n", pontosturisticos1);
      printf("densidade populacional: %.2f(hab/area)", densidade1);
      
      printf("\n---------------------\n\n")
      
      printf("\n===Carta 2===\n");
      printf("Estado: %s\n", estado2);
      printf("codigo: %s\n", codigo2);
      printf("cidade: %s\n", cidade2);
      printf("populacao: %d\n", populacao2);
      printf("area: %.2f(km2)\n", area2);
      printf("pib: %.2f\n", pib2);
      printf("pontos turisticos: %d\n", pontosturisticos2);
      printf("densidade populacional: %.2f(hab/area)", densidade2);

      return 0;

    }
      
