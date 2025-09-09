#include <stdio.h>

struct CartaSuperTrunfo {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;
};

int main() {
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &carta1.estado);
    
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    
    printf("Digite a Populacao: ");
    scanf("%d", &carta1.populacao);
    
    printf("Digite a Area (em km²): ");
    scanf("%f", &carta1.area);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.numeroPontosTuristicos);

    printf("\n---------------------------\n\n");

    printf("--- Cadastro da Carta 2 ---\n");
    
    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &carta2.estado);
    
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    
    printf("Digite a Populacao: ");
    scanf("%d", &carta2.populacao);
    
    printf("Digite a Area (em km²): ");
    scanf("%f", &carta2.area);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);
    
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.numeroPontosTuristicos);
    
    printf("\n==================================\n\n");

    printf("--- Dados Cadastrados ---\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.numeroPontosTuristicos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.numeroPontosTuristicos);

    return 0;
}