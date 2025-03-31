#include <stdio.h>

int main() {
    char nome_da_cidade[20];
    char estado;
    char codigo;
    float pib;
    float area;
    int populacao;
    int pontos_turisticos;

    char nome_da_cidade1[20];
    char estado1;
    char codigo1;
    float pib1;
    float area1;
    int populacao1;
    int pontos_turisticos1;

    printf("Cadastro da Primeira Carta:\n");
    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado); // Espaço antes de %c para evitar problemas de buffer

    printf("Digite o Código da cidade (1-4):\n");
    scanf(" %c", &codigo);

    printf("Digite o Nome da cidade:\n");
    scanf(" %[^\n]", nome_da_cidade); // Permite nomes compostos

    printf("Digite a População da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a Área da cidade (em km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("\nCadastro da Segunda Carta:\n");
    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado1);

    printf("Digite o Código da cidade (1-4):\n");
    scanf(" %c", &codigo1);

    printf("Digite o Nome da cidade:\n");
    scanf(" %[^\n]", nome_da_cidade1);

    printf("Digite a População da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    printf("\nCarta 1 :\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    printf("\nCarta 2 :\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    return 0;
}

