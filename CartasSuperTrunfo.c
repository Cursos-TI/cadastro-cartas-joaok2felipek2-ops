#include <stdio.h>
int main()
{
    char Pais1[50], Pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Pais (A-H): ");
    scanf(" %s", &Pais1);
    getchar();
    printf("Informe a População: ");
    scanf("%d", &populacao1);
    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Pais (A-H): ");
    scanf(" %s", &Pais2);
    getchar();
    printf("Informe a População: ");
    scanf("%d", &populacao2);
    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

          // Cálculo da densidade
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Saida da Carta 1
    printf("\nCarta 1:\n");
    printf("Pais: %s\n", Pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    // Saida Carta 2
    printf("\nCarta 2:\n");
    printf("Pais: %s\n", Pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    // MENU 
     int opcao;

    printf("\nMenu de Comparação\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

        switch (opcao) {
        case 1: // População
            printf("Comparando População:\n");
            printf("%s: %d\n", Pais1, populacao1);
            printf("%s: %d\n", Pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", Pais1, area1);
            printf("%s: %.2f km²\n", Pais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões\n", Pais1, pib1);
            printf("%s: %.2f bilhões\n", Pais2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", Pais1, pontosTuristicos1);
            printf("%s: %d\n", Pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence!)
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", Pais1, densidade1);
            printf("%s: %.2f hab/km²\n", Pais2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", Pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", Pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
