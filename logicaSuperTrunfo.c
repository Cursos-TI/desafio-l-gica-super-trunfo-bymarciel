#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
} CartaPais;

void compararCartas(CartaPais c1, CartaPais c2, int opcao) {
    printf("\n===== COMPARAÇÃO =====\n");
    printf("País 1: %s\n", c1.nome);
    printf("País 2: %s\n", c2.nome);

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d\n", c1.nome, c1.populacao);
            printf("%s: %d\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.populacao > c1.populacao)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", c1.nome, c1.area);
            printf("%s: %.2f km²\n", c2.nome, c2.area);
            if (c1.area > c2.area)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.area > c1.area)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", c1.nome, c1.pib);
            printf("%s: %.2f bilhões\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", c1.nome, c1.pontosTuristicos);
            printf("%s: %d\n", c2.nome, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontosTuristicos > c1.pontosTuristicos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", c1.nome, c1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", c2.nome, c2.densidadeDemografica);
            if (c1.densidadeDemografica < c2.densidadeDemografica)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.densidadeDemografica < c1.densidadeDemografica)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }
}

int main() {
    // Cartas exemplo
    CartaPais pais1 = {"Brasil", 211000000, 8515767.0, 1800.0, 30, 24.77};
    CartaPais pais2 = {"Japão", 126000000, 377975.0, 5000.0, 50, 333.47};

    int escolha;

    printf("=== SUPER TRUNFO - PAÍSES ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha);

    compararCartas(pais1, pais2, escolha);

    return 0;
}
