#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: criar cartas representando cidades, utilizando scanf para
// entrada de dados e printf para exibição das informações.

int main() {

    // ===============================
    // Declaração das variáveis
    // ===============================

    // Carta 1
    char Estado1[3];
    char codigo1[4];
    char cidade1[30];
    int populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char Estado2[3];
    char codigo2[4];
    char cidade2[30];
    int populacao2, pontos2;
    float area2, pib2;

    // ===============================
    // Entrada de dados - Carta 1
    // ===============================

    printf("Carta 1\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado1);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos1);

    // ===============================
    // Entrada de dados - Carta 2
    // ===============================

    printf("\nCarta 2\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado2);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    return 0;
}
