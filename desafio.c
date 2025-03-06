#include <stdio.h>

int main() {
    // Definição de variaveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    //dados da carta 1
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1; 

    //superpoder carta 1
    super_poder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);


    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2; 

    //superpoder carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade_populacional1 > densidade_populacional2));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder1 > super_poder2));

    return 0;
}