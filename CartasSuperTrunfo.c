#include <stdio.h>

int main() {
    char nome_da_cidade[50];
    char estado;
    char codigo[5];
    float pib;
    float area;
    unsigned long int populacao;
    int pontos_turisticos;

    char nome_da_cidade1[50];
    char estado1;
    char codigo1[5];
    float pib1;
    float area1;
    unsigned long int populacao1;
    int pontos_turisticos1;


    float densidade, densidade1;
    float pib_per_capita, pib_per_capita1;
    float super_poder, super_poder1;



//Cadastrado da Primeira Carta
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado); // Espaço antes de %c para evitar problemas de buffer

    printf("Digite o Código da cidade (1-4):\n");
    scanf(" %c", &codigo);

    printf("Digite o Nome da cidade:\n");
    scanf(" %[^\n]", nome_da_cidade); // Permite nomes compostos

    printf("Digite a População da cidade:\n");
    scanf("%lu", &populacao);

    printf("Digite a Área da cidade (em km²):\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

  //Cadastro da Segunda Carta

    printf("\nCadastro da Segunda Carta:\n");
    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado1);

    printf("Digite o Código da cidade (1-4):\n");
    scanf(" %c", &codigo1);

    printf("Digite o Nome da cidade:\n");
    scanf(" %[^\n]", nome_da_cidade1);

    printf("Digite a População da cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite a Área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos1);

// Cálculos
densidade = populacao / area;
densidade1 = populacao1 / area1;

pib_per_capita = pib * 1000000000 / populacao;
pib_per_capita1 = pib1 * 1000000000 / populacao1;

super_poder = populacao + area + pib + pontos_turisticos + pib_per_capita + (1 /densidade);
super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 /densidade1);


//Comparações
printf("\nComparação de Cartas\n");

printf("%-25s %s\n", "População:", (populacao > populacao1) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
printf("%-25s %s\n", "Área:", (area > area1) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
printf("%-25s %s\n", "PIB:", (pib > pib1) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
printf("%-25s %s\n", "Pontos Turísticos:", (pontos_turisticos > pontos_turisticos1) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
printf("%-25s %s\n", "Densidade Populacional:", (densidade > densidade1) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
printf("%-25s %s\n", "PIB per Capita:", (pib_per_capita > pib_per_capita1) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
printf("%-25s %s\n", "Super Poder:", (super_poder > super_poder1) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");


return 0;
}

   

