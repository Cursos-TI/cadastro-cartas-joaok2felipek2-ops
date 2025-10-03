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


 // Comparações das Cartas
    printf("\nComparação de Cartas: %s x %s\n", Pais1, Pais2);

    int opcao1, opcao2;
    int resultado1, resultado2;

    printf("* SUPER TRUNFO - MENU DE COMPARAÇÃO *\n");
    printf("Escolha o primeiro atributo.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");

    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1:
        printf("Você escolheu a opção População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;

        case 2:
        printf("Você escolheu a opção Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        
        case 3:
        printf("Você escolheu a opção PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;

        case 4:
        printf("Você escolheu a opção Pontos Turísticos!\n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;

        case 5:
        printf("Você escolheu a opção Densidade Demográfica!\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
    }

    printf("Escolha o segundo atributo.\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");

    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (opcao2) {
            case 1:
                printf("Você escolheu a opção População!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;

            case 2:
                printf("Você escolheu a opção Área!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;

            case 3:
                printf("Você escolheu a opção PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;

            case 4:
                printf("Você escolheu a opção Pontos Turísticos!\n");
                resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                break;

            case 5:
                printf("Você escolheu a opção Densidade Demográfica!\n");
                resultado2 = densidade1 > densidade2 ? 1 : 0;
                break;
            default:
                printf("Opção inválida!\n");
        }

        // Resultado final
        if (resultado1 && resultado2) {
            printf("Carta 1 (%s) venceu a comparação!\n", Pais1);
        } else if (resultado1 != resultado2) {
            printf("Empate na comparação!\n");
        } else {
            printf("Carta 2 (%s) venceu a comparação!\n", Pais2);
        }
    }
    return 0;
}
