#include <stdio.h>

#define ESTADOS 8
#define CIDADES 4
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

typedef struct CartasSuperTrunfo
{
    char codigo[5];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} CIDADE;

int main(){
    CIDADE cidades[ESTADOS * CIDADES];
    int i;
    char estado;
    int numero;

    printf("Cadastro de cidades\n");

    for (i = 0; i < ESTADOS * CIDADES; i++) {
        printf("\nCadastro da cidade %d: \n", i + 1);

        printf("Informe o estado (A-H): ");
        scanf(" %c", &estado);

        printf("Informe o numero da cidade (1-4): ");
        scanf("%d", &numero);

        sprintf(cidades[i].codigo, "%c%02d", estado, numero);

        printf("População: ");
        scanf("%d", &cidades[i].populacao);

         printf("Área (km²): ");
         scanf("%f", &cidades[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cidades[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);

    }

    printf("\nDados cadastrados:\n");
    for (i = 0; i < ESTADOS * CIDADES; i++) {
        printf("\nCódigo: %s\n", cidades[i].codigo);
        printf("\nPopulação: %d\n", cidades[i].populacao);
        printf("\nÁrea: %.2f km²\n", cidades[i].area);
        printf("\nPIB: %.2f bilhões\n", cidades[i].pib);
        printf("\nPontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0;
}
