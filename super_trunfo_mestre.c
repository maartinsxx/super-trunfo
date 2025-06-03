#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[20];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // atributos calculados
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

void lerCarta(Carta *carta, int n) {
    printf("Digite os dados da Carta %d:\n", n);
    printf("Estado: ");
    fgets(carta->estado, sizeof(carta->estado), stdin);
    carta->estado[strcspn(carta->estado, "\n")] = '\0'; // remover \n

    printf("Código: ");
    fgets(carta->codigo, sizeof(carta->codigo), stdin);
    carta->codigo[strcspn(carta->codigo, "\n")] = '\0';

    printf("Nome: ");
    fgets(carta->nome, sizeof(carta->nome), stdin);
    carta->nome[strcspn(carta->nome, "\n")] = '\0';

    printf("População (unsigned long int): ");
    scanf("%lu", &carta->populacao);

    printf("Área (float): ");
    scanf("%f", &carta->area);

    printf("PIB (float): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos (int): ");
    scanf("%d", &carta->pontos_turisticos);

    getchar(); // limpar buffer
}

void calcularAtributos(Carta *carta) {
    carta->densidade = (carta->area != 0.0f) ? ((float)carta->populacao / carta->area) : 0.0f;
    carta->pib_per_capita = (carta->populacao != 0) ? (carta->pib / (float)carta->populacao) : 0.0f;

    // super poder:
    // soma: populacao (float), area, pib, pontos turísticos, pib per capita, inverso da densidade
    float inverso_densidade = (carta->densidade != 0.0f) ? (1.0f / carta->densidade) : 0.0f;

    carta->super_poder = (float)carta->populacao +
                         carta->area +
                         carta->pib +
                         (float)carta->pontos_turisticos +
                         carta->pib_per_capita +
                         inverso_densidade;
}

int main() {
    Carta carta1, carta2;

    // leitura das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // calcular atributos derivados
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    printf("\nComparação de Cartas:\n\n");

    // População: maior vence
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao ? 1 : 0);

    // Área: maior vence
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area ? 1 : 0);

    // PIB: maior vence
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib ? 1 : 0);

    // Pontos turísticos: maior vence
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0);

    // Densidade populacional: menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade ? 1 : 0);

    // PIB per capita: maior vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita ? 1 : 0);

    // Super Poder: maior vence
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder ? 1 : 0);

    return 0;
}
