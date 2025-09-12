#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float SuperPoder;
    
    
} Carta;
 // Função principal
int main() {
    Carta c1, c2;
    
    printf("estado (A-H): ");
    scanf(" %c", &c1.estado);

    printf("Codigo: ");
    scanf("%s", c1.codigo);
    
    printf("nome da cidade: ");
    scanf(" %[^\n]", c1.nomeCidade);
    
    printf("PIB: ");
    scanf("%f", &c1.pib);
    
    printf("população (em milhões): ");
    scanf("%lu", &c1.populacao);
    
    printf("área (em km2):");
    scanf("%f", &c1.area );
    
    printf("numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);
    
    printf("                  \n");
      
    printf("estado (A-H): ");
    scanf(" %c", &c2.estado);

    printf("Codigo: ");
    scanf("%s", c2.codigo);
    
    printf("nome da cidade: ");
    scanf(" %[^\n]", c2.nomeCidade);
    
    printf("PIB: ");
    scanf("%f", &c2.pib);
    
    printf("população (em milhões): ");
    scanf("%lu", &c2.populacao);
    
    printf("área (em km2):");
    scanf("%f", &c2.area );
    
    printf("numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);
  
    
// calculo de denssidade populacional e pib por capital
    float densidade1 = c1.populacao / c1.area;
    float pibPerCapita1 = c1.pib / c1.populacao;
    float densidadePopulacional = c1.populacao / c1.area;

    float densidade2 = c2.populacao / c2.area;
    float pibPerCapita2 = c2.pib / c2.populacao;
    float densidadePopulacional2 = c2.populacao / c2.area;

// Menu interativo
int opcao;
 
    printf("                  \n");
    
    printf("Menu Interativo:\n");
    printf("1 - Nome do pais\n");
    printf("2 - Atributo usado\n");
    printf("3 - Os valores do atributos para cada carta\n");
    printf("4 - Carta Vencedora\n");

    printf("Escolha uma opção (1-4): ");
    scanf("%d", &opcao);
// Processar a escolha do usuário

    switch (opcao){
    case 1:
        printf("             \n");
        printf("Carta 1: %s\n", c1.nomeCidade);
        printf("Carta 2: %s\n", c2.nomeCidade);
        break;
    case 2:
        printf("             \n");
        printf("PIB per capita\n");
        break;
    case 3:
        printf("             \n");
        printf("Carta 1 - PIB per capita: %.2f\n", pibPerCapita1);
        printf("Carta 2 - PIB per capita: %.2f\n", pibPerCapita2);
        break;
    case 4:
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Carta Vencedora: %s\n", c1.nomeCidade);
            printf("             \n");
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("             \n");
            printf("Carta Vencedora: %s\n", c2.nomeCidade);
        } else {
            printf("             \n");
            printf("Empate!\n");
        }
        break;

    default:
        printf("Opção inválida!\n");
        break;}

return 0;
}