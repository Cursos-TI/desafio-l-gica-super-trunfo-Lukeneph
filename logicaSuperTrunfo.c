#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

} Carta;

    int main() {
    Carta c1, c2;
// cadastro da carta1
    printf("estado (A-H): ");
    scanf(" %c", &c1.estado);

    printf("nome da cidade: ");
    scanf(" %[^\n]", c1.nomeCidade);

    printf("Codigo: ");
    scanf("%s", c1.codigo);

    printf("PIB: ");
    scanf("%f", &c1.pib);

    printf("população (em milhões): ");
    scanf("%d", &c1.populacao);

    printf("área (em km2):");
    scanf("%f", &c1.area );

    printf("numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    printf("                  \n");
// cadastro da carta2
    printf("estado (A-H): ");
    scanf(" %c", &c2.estado);

    printf("nome da cidade: ");
    scanf(" %[^\n]", c2.nomeCidade);

    printf("Codigo: ");
    scanf("%s", c2.codigo);

    printf("PIB: ");
    scanf("%f", &c2.pib);

    printf("população (em milhões): ");
    scanf("%d", &c2.populacao);

    printf("área (em km2):");
    scanf("%f", &c2.area );

    printf("numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);
// impressão das cartas
    printf("                  \n");
    printf("carta 1:\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Nome da cidade: %s\n", c1.nomeCidade);
    printf("estado: %c\n", c1.estado);
    printf("PIB: %.2f Bilhões de reais\n", c1.pib);
    printf("população: %d milhões\n", c1.populacao);
    printf("área: %.2f km2\n", c1.area);
    printf("Numero de pontos Turisticos: %d\n", c1.pontosTuristicos);

    printf("                  \n");
    printf("carta 2:\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Nome da cidade: %s\n", c2.nomeCidade);
    printf("estado: %c\n", c2.estado);
    printf("PIB: %.2f Bilhões de reais\n", c2.pib);
    printf("população: %d milhões\n", c2.populacao);
    printf("área: %.2f km2\n", c2.area);
    printf("Numero de pontos Turisticos: %d\n", c2.pontosTuristicos);

// calculo de denssidade populacional e pib por capital
    float densidade1 = c1.populacao / c1.area;
    float pibPerCapita1 = c1.pib / c1.populacao;

    float densidade2 = c2.populacao / c2.area;
    float pibPerCapita2 = c2.pib / c2.populacao;

    printf("                  \n");
    
// printf para mostrar os calculos da carta 1
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB por capital: %.2f\n", pibPerCapita1);

// printf para mostrar os calculos da carta 2
    printf("                  \n");
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