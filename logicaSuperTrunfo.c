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

    float densidade2 = c2.populacao / c2.area;
    float pibPerCapita2 = c2.pib / c2.populacao;

    printf("                  \n");
    
// printf para mostrar os calculos da carta 1
    printf("Carta 1 (%s): \n", c1.nomeCidade);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB por capital: %.2f\n", pibPerCapita1);

// printf para mostrar os calculos da carta 2
    printf("                  \n");
    printf("Carta 2 (%s): \n", c2.nomeCidade);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB por capital: %.2f\n", pibPerCapita2);

    printf("                  \n");                                                                                                            

// comparação de cartas usando pib
if (c1.pib > c2.pib) {
    printf("Resultado: Carta 1 (%s) venceu!\n", c1.nomeCidade);
} else if (c1.pib < c2.pib) {
    printf("Resultado: Carta 2 (%s) venceu!\n", c2.nomeCidade);
} else {
    printf("Empate!\n");
}

return 0;
}